#include <iostream>
#include <fstream>

#include "builder_prepare.h"
#include "builder_config.h"
#include "Image.h"

Prepare::Prepare(const GNW& gnw)
	: m_gnw(gnw)
    , m_svg(nullptr)
    , m_svgScale(0)
    , m_svgXOffset(0)
    , m_svgYOffset(0)
{
    auto expansion = 2 * m_gnw.GetConfig().exp;
    auto ratio = float(lcdW) / float(lcdH + expansion);

    m_imgW = size_t(pxlS * lcdW);
    m_imgH = size_t(pxlS * lcdW / ratio);
}

Prepare::~Prepare()
{
    nsvgDelete(m_svg);
}

bool Prepare::PrepareForPixelArt()
{
    std::cout << "prepare for pixel art: " << m_gnw.GetName() << std::endl;
    if (OpenSVG())
    {
        CollectSegmentsInfo();
        RenderLCDScreen();
        RenderReference();
        RenderDummyLCD();

        std::cout << std::endl;
        return true;
    }

    std::cout << std::endl;
    return false;
}

bool Prepare::OpenSVG()
{
    std::string file = m_gnw.GetAssetPath("svg");
    m_svg = nsvgParseFromFile(file.c_str(), "px", 96.0f);

    if (m_svg)
    {
        auto svgW = m_svg->width;
        auto svgH = m_svg->height;

        m_svgScale = std::min(m_imgW / svgW, m_imgH / svgH);
        m_svgXOffset = std::floorf(0.5f * (m_imgW - m_svgScale * svgW));
        m_svgYOffset = std::floorf(0.5f * (m_imgH - m_svgScale * svgH));

        m_svg->shapes->fill.color = 0;
        return true;
    }

    std::cout << "ERROR: could not open SVG!" << std::endl;
    std::cout << file << std::endl;
    return false;
}

void Prepare::CollectSegmentsInfo()
{
    for (NSVGshape* shape = m_svg->shapes; shape != nullptr; shape = shape->next)
    {
        const std::string title = shape->title;
        if (!title.empty() && title.size() == 5 && title[1] == '.' && title[3] == '.')
        {
            Segment segment;
            SegmentId segmentId;
            segment.SetBySTR(title);
            segment.GetAsINT(segmentId);

            m_segmentIdToSegment[segmentId].SetByINT(segmentId);
            m_segmentIdToSegment[segmentId].UpdateTL(shape->bounds[0], shape->bounds[1]);
            m_segmentIdToSegment[segmentId].UpdateBR(shape->bounds[2], shape->bounds[3]);
        }
    }

    std::cout << "\tencoded " << m_segmentIdToSegment.size() << " segments" << std::endl;
    std::ofstream stream(m_gnw.GetAssetsPath() + "segments.encoded.log");
    for (auto& pair : m_segmentIdToSegment) pair.second.Write(stream);
    stream.close();
}

void Prepare::RenderLCDScreen()
{
    std::cout << "\trender pixels layer" << std::endl;

    Image image(m_imgW, m_imgH, true);
    Image::Pixel oColor(0xFF, 0x00, 0x00, 0x7F);
    Image::Pixel cColor(0x00, 0x7F, 0x7F, 0x7F);
    Image::Pixel pColor(0x7F, 0x7F, 0x7F, 0x7F);
    Image::Pixel bColor(0x7F, 0x7F, 0x00, 0x7F);

    size_t tEdge = (((m_imgH / pxlS) - lcdH) / 2) * pxlS;
    size_t bEdge = tEdge + lcdH * pxlS;

    for (size_t y = 0; y < image.GetH(); ++y)
    {
        for (size_t x = 0; x < image.GetW(); ++x)
        {
            if ((y % pxlS) != 0 && (x % pxlS) != 0)
            {
                if (y < tEdge || y >= bEdge)
                {
                    // outside screen marking
                    image.SetPixel(x, y, oColor);
                }
                continue;
            }

            // regular pixel
            image.SetPixel(x, y, pColor);
            if (y >= tEdge && y < bEdge)
            {
                size_t sy = y - tEdge;
                if ((sy % (8 * pxlS) == 0) || (x % (8 * pxlS)) == 0)
                {
                    if (sy == lcdH * pxlS / 2 || x == lcdW * pxlS / 2)
                    {
                        // center marking
                        image.SetPixel(x, y, cColor);
                    }
                    else
                    {
                        // block marking
                        image.SetPixel(x, y, bColor);
                    }
                }

            }
        }
    }

    std::string file = m_gnw.GetAssetsPath() + "pixelart.lcdscreen.png";
    std::cout << "\t\tsave to " << file << std::endl;
    image.Save(file);
}

void Prepare::RenderReference()
{
    std::cout << "\trender reference layer" << std::endl;

    Image image(m_imgW, m_imgH, true);
    Image::Format format(2, 2, 2, 1, Image::DitheringNone, Image::DitheringNone);

    NSVGrasterizer* svgRasterizer = nsvgCreateRasterizer();
    for (auto& pair : m_segmentIdToSegment)
    {
        auto& segment = pair.second;

        std::string title;
        segment.GetAsSTR(title);

        // temporary segment
        Image imgTmp(m_imgW, m_imgH, true);
        for (auto shape = m_svg->shapes; shape != nullptr; shape = shape->next)
        {
            shape->flags = (shape->title == title ? NSVG_FLAGS_VISIBLE : 0);
        }
        nsvgRasterize(
            svgRasterizer,
            m_svg,
            m_svgXOffset,
            m_svgYOffset,
            m_svgScale,
            imgTmp.GetBytes(),
            imgTmp.GetW(),
            imgTmp.GetH(),
            imgTmp.GetStride()
        );
        imgTmp.Quantize(format);

        // colorized segment
        int R, G, B;
        segment.GetAsRGB(R, G, B);
        Image::Pixel color(R, G, B, 0xFF);

        auto x0 = int(m_svgXOffset + segment.bounds.x0 * m_svgScale);
        auto y0 = int(m_svgYOffset + segment.bounds.y0 * m_svgScale);
        auto x1 = int(m_svgXOffset + segment.bounds.x1 * m_svgScale);
        auto y1 = int(m_svgYOffset + segment.bounds.y1 * m_svgScale);

        for (int y = y0; y <= y1; ++y)
        {
            for (int x = x0; x <= x1; ++x)
            {
                if (imgTmp.GetPixel(x, y).m_a != 0)
                {
                    image.SetPixel(x, y, color);
                }
            }
        }
    }
    nsvgDeleteRasterizer(svgRasterizer);

    std::string file = m_gnw.GetAssetsPath() + "pixelart.reference.png";
    std::cout << "\t\tsave to " << file << std::endl;
    image.Save(file);

}

void Prepare::RenderDummyLCD()
{
    std::cout << "\trender dummy display" << std::endl;

    Image image(lcdW, lcdH, true);
    for (auto& pair : m_segmentIdToSegment)
    {
        auto& segment = pair.second;

        std::string title;
        segment.GetAsSTR(title);

        int R, G, B;
        segment.GetAsRGB(R, G, B);
        Image::Pixel color(R, G, B, 0xFF);

        // segment on dummy display
        for (NSVGshape* shape = m_svg->shapes; shape != nullptr; shape = shape->next)
        {
            if (shape->title == title)
            {
                auto x0 = int(m_svgXOffset + shape->bounds[0] * m_svgScale) / pxlS;
                auto y0 = int(m_svgYOffset + shape->bounds[1] * m_svgScale) / pxlS - m_gnw.GetConfig().exp;
                auto x1 = int(m_svgXOffset + shape->bounds[2] * m_svgScale) / pxlS;
                auto y1 = int(m_svgYOffset + shape->bounds[3] * m_svgScale) / pxlS - m_gnw.GetConfig().exp;

                for (int y = y0; y <= y1; ++y)
                {
                    for (int x = x0; x <= x1; ++x)
                    {
                        image.SetPixel(x, y, color);
                    }
                }
            }
        }
    }

    // graphics on dummy display
    srand(0);
    Image::Pixel black(0, 0, 0, 0xFF);
    for (int i = 0; i < 30; ++i)
    {
        int x = rand() % lcdW;
        int y = rand() % lcdH;
        int x0 = std::max(x - 3, 0);
        int y0 = std::max(y - 3, 0);
        int x1 = std::min(x + 3, lcdW - 1);
        int y1 = std::min(y + 3, lcdH - 1);
        for (int yy = y0; yy <= y1; ++yy)
            if (image.GetPixel(x, yy).m_a == 0)
                image.SetPixel(x, yy, black);
        for (int xx = x0; xx <= x1; ++xx)
            if (image.GetPixel(xx, y).m_a == 0)
                image.SetPixel(xx, y, black);
    }

    std::string file = m_gnw.GetAssetPath("png");
    std::cout << "\t\tsave to " << file << std::endl;
    image.Save(file);
}
