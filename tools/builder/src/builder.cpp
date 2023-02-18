#include <iostream>
#include <vector>
#include <map>
#include <svg.h>

#include "GNW.h"
#include "Image.h"
#include "builder.h"

// -----------------------------------------------------------------------------

using SegmentShapes = std::vector<NSVGshape*>;
using SegmentsMap   = std::map<std::string, SegmentShapes>;

void HSVtoRGB(float H, float S, float V, int& R, int& G, int& B) 
{
    if (H > 360 || H < 0 || S > 100 || S < 0 || V> 100 || V < 0) 
    {
        std::cout << "The givem HSV values are not in valid range" << std::endl;
        return;
    }

    float s = S / 100;
    float v = V / 100;
    float C = s * v;
    float X = C * (1 - abs(fmod(H / 60.f, 2) - 1));
    float m = v - C;
    float r, g, b;

    if (H >= 0 && H < 60)         { r = C, g = X, b = 0; }
    else if (H >= 60  && H < 120) { r = X, g = C, b = 0; }
    else if (H >= 120 && H < 180) { r = 0, g = C, b = X; }
    else if (H >= 180 && H < 240) { r = 0, g = X, b = C; }
    else if (H >= 240 && H < 300) { r = X, g = 0, b = C; }
    else                          { r = C, g = 0, b = X; }

    R = int((r + m) * 255);
    G = int((g + m) * 255);
    B = int((b + m) * 255);
}

bool PrepareForPixelArt(const GNW& gnw)
{
    std::cout << "prepare for pixel art: " << gnw.GetName() << std::endl;

    std::string svgFile = gnw.GetAssetPath("svg");
    std::string pxlFile = gnw.GetAssetPath("pixels.png");
    std::string refFile = gnw.GetAssetPath("reference.png");

    NSVGimage* svgImage = nullptr;
    NSVGrasterizer* svgRasterizer = nullptr;

    if (svgImage = nsvgParseFromFile(svgFile.c_str(), "px", 96.0f))
    {
        svgRasterizer = nsvgCreateRasterizer();
        svgImage->shapes->fill.color = 0;

        // ---------------------------------------------------------------------
       
        SegmentsMap segments;
        for (NSVGshape* shape = svgImage->shapes; shape != nullptr; shape = shape->next)
        {
            std::string title = shape->title;
            if (!title.empty() && title.size() == 5 && title[1] == '.' && title[3] == '.')
            {
                segments[title].push_back(shape);
            }
        }

        std::cout << "\tfound " << segments.size() << " segments" << std::endl;
        // ---------------------------------------------------------------------

        auto ratio = float(lcdW) / float(lcdH + 2 * gnw.GetConfig().exp);
        auto imgW  = size_t(pxlS * lcdW);
        auto imgH  = size_t(pxlS * lcdW / ratio);

        auto svgScale = std::min(imgW / svgImage->width, imgH / svgImage->height);
        auto svgOffX  = std::floorf((imgW - svgImage->width  * svgScale) / 2);
        auto svgOffY  = std::floorf((imgH - svgImage->height * svgScale) / 2);

        // ---------------------------------------------------------------------
        std::cout << "\trender pixels layer asset" << std::endl;

        Image imgLcd(imgW, imgH, true);
        Image::Pixel lcdEdge(0xFF, 0x00, 0x00, 0x7F);
        Image::Pixel lcdCent(0x00, 0xFF, 0xFF, 0x7F);
        Image::Pixel lcdGrid(0x7F, 0x7F, 0x7F, 0x7F);

        size_t topEdge = (((imgH / pxlS) - lcdH) / 2) * pxlS;
        size_t botEdge = topEdge + lcdH * pxlS;

        for (size_t y = 0; y < imgLcd.GetH(); ++y)
        {
            for (size_t x = 0; x < imgLcd.GetW(); ++x)
            {
                if (y < topEdge || y >= botEdge)
                {
                    imgLcd.SetPixel(x, y, lcdEdge);
                }

                if ((y % pxlS) == 0 || (x % pxlS) == 0)
                {
                    if (y == imgLcd.GetH() / 2 || x == imgLcd.GetW() / 2)
                    {
                        imgLcd.SetPixel(x, y, lcdCent);
                    }
                    else
                    {
                        imgLcd.SetPixel(x, y, lcdGrid);
                    }
                }
            }
        }

        std::cout << "\t\tsave to " << pxlFile << std::endl;
        imgLcd.Save(pxlFile);
        
        // ---------------------------------------------------------------------
        std::cout << "\trender reference layer asset" << std::endl;

        Image imgSeg(imgW, imgH, true);
        Image::Format format(2, 2, 2, 1, Image::DitheringNone, Image::DitheringNone);

        for (auto& pair : segments)
        {
            const std::string& title = pair.first;
            const SegmentShapes& shapes = pair.second;

            // color
            int o = title[0] - '0'; // 0 - 8 => 4 bits
            int s = title[2] - '0'; // 0 - 3 => 2 bits
            int h = title[4] - '0'; // 0 - 1 => 1 bits
            int R, G, B;
            float H = 360.f * float(o) / 9.f;
            float S = 25.f + 75.f * float(h) / 1.f;
            float V = 25.f + 75.f * float(s) / 3.f;
            HSVtoRGB(H, S, V, R, G, B);
            Image::Pixel color(R, G, B, 0xFF);

            // boundaries
            float tx = shapes[0]->bounds[0];
            float ty = shapes[0]->bounds[1];
            float bx = shapes[0]->bounds[2];
            float by = shapes[0]->bounds[3];
            for (auto shape : shapes)
            {
                tx = std::min(tx, shape->bounds[0]);
                ty = std::min(ty, shape->bounds[1]);
                bx = std::max(bx, shape->bounds[2]);
                by = std::max(by, shape->bounds[3]);
            }
            int x0 = int(svgOffX + tx * svgScale);
            int y0 = int(svgOffY + ty * svgScale);
            int x1 = int(svgOffX + bx * svgScale);
            int y1 = int(svgOffY + by * svgScale);

            // temporary segment
            Image imgTmp(imgW, imgH, true);
            for (auto shape = svgImage->shapes; shape != nullptr; shape = shape->next)
            {
                shape->flags = (shape->title == title ? NSVG_FLAGS_VISIBLE : 0);
            }
            nsvgRasterize(
                svgRasterizer,
                svgImage, svgOffX, svgOffY, svgScale,
                imgTmp.GetBytes(), imgTmp.GetW(), imgTmp.GetH(), imgTmp.GetStride()
            );
            imgTmp.Quantize(format);

            // colorized segment
            for (int y = y0; y <= y1; ++y)
            {
                for (int x = x0; x <= x1; ++x)
                {
                    if (imgTmp.GetPixel(x, y).m_a != 0)
                    {
                        imgSeg.SetPixel(x, y, color);
                    }
                }
            }
        }

        std::cout << "\t\tsave to " << refFile << std::endl;
        imgSeg.Save(refFile);

        nsvgDelete(svgImage);
        nsvgDeleteRasterizer(svgRasterizer);

        std::cout << std::endl;
        return true;
    }
    
    std::cout << "ERROR: could not open SVG!" << std::endl;
    std::cout << svgFile << std::endl;

    std::cout << std::endl;
    return false;
}

bool CompileAssets(const GNW& gnw)
{
    // TODO

    return false;
}

int main(int argc, char* argv[])
{
    if (argc == 2)
    {
        std::string command = argv[1];
        if (command == "prepare-for-pixelart")
        {
            for (const auto& game : games)
            {
                if (!PrepareForPixelArt(GNW(game))) return 1;
            }
            return 0;
        }
        if (command == "compile-assets")
        {
            for (const auto& game : games)
            {
                if (!CompileAssets(GNW(game))) return 1;
            }
            return 0;
        }
    }
    return 1;
}
