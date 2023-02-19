#include <iostream>
#include <vector>
#include <map>
#include <svg.h>

#include "GNW.h"
#include "Dump.h"
#include "Image.h"
#include "HsvRgb.h"
#include "builder.h"

// -----------------------------------------------------------------------------

struct Segment
{
    int o; // 0 - 8 => 4 bits
    int s; // 0 - 3 => 2 bits
    int h; // 0 - 1 => 1 bits

    struct {
        float x0 = +FLT_MAX;
        float y0 = +FLT_MAX;
        float x1 = -FLT_MAX;
        float y1 = -FLT_MAX;
    } bounds;

    void SetBySTR(const std::string& str)
    {
        if (!str.empty() && str.size() == 5 && str[1] == '.' && str[3] == '.')
        {
            o = str[0] - '0';
            s = str[2] - '0';
            h = str[4] - '0';
        }
    }

    void SetByRGB(int R, int G, int B)
    {
        float H, S, V;
        RGBtoHSV(R, B, G, H, S, V);
        o = int(9.f * H / 360.f);
        s = int(3.f * (V - 25.f) / 75.f);
        h = int(1.f * (S - 25.f) / 75.f);
    }

    void GetAsSTR(std::string& str) const
    {
        str.resize(5);
        str[0] = o + '0';
        str[2] = s + '0';
        str[4] = h + '0';
        str[1] = str[3] = '.';
    }

    void GetAsRGB(int& R, int& G, int& B) const
    {
        float H = 360.f * float(o) / 9.f;
        float S = 25.f + 75.f * float(h) / 1.f;
        float V = 25.f + 75.f * float(s) / 3.f;
        HSVtoRGB(H, S, V, R, G, B);
    }

    void UpdateTL(float x, float y)
    {
        bounds.x0 = std::min(bounds.x0, x);
        bounds.y0 = std::min(bounds.y0, y);
    }

    void UpdateBR(float x, float y)
    {
        bounds.x1 = std::max(bounds.x1, x);
        bounds.y1 = std::max(bounds.y1, y);
    }
};

using Segments = std::map<std::string, Segment>;

// -----------------------------------------------------------------------------

bool PrepareForPixelArt(const GNW& gnw)
{
    std::cout << "prepare for pixel art: " << gnw.GetName() << std::endl;

    std::string svgFile = gnw.GetAssetPath("svg");
    std::string pxlFile = gnw.GetAssetPath("pixels.png");
    std::string refFile = gnw.GetAssetPath("reference.png");
    std::string dumFile = gnw.GetAssetPath("png");

    NSVGimage* svgImage = nullptr;
    NSVGrasterizer* svgRasterizer = nullptr;

    if (svgImage = nsvgParseFromFile(svgFile.c_str(), "px", 96.0f))
    {
        svgRasterizer = nsvgCreateRasterizer();
        svgImage->shapes->fill.color = 0;

        // ---------------------------------------------------------------------
       
        Segments segments;
        for (NSVGshape* shape = svgImage->shapes; shape != nullptr; shape = shape->next)
        {
            std::string title = shape->title;
            if (!title.empty() && title.size() == 5 && title[1] == '.' && title[3] == '.')
            {
                if (segments.find(title) == segments.end())
                {
                    segments[title].SetBySTR(title);
                }
                segments[title].UpdateTL(shape->bounds[0], shape->bounds[1]);
                segments[title].UpdateBR(shape->bounds[2], shape->bounds[3]);
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
        std::cout << "\trender pixels layer" << std::endl;

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
        std::cout << "\trender reference layer" << std::endl;
        std::cout << "\trender dummy display" << std::endl;

        Image imgSeg(imgW, imgH, true);
        Image imgDum(lcdW, lcdH, true);
        Image::Format format(2, 2, 2, 1, Image::DitheringNone, Image::DitheringNone);

        for (auto& pair : segments)
        {
            const std::string& title = pair.first;
            const Segment& segment = pair.second;

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
            int R, G, B;
            segment.GetAsRGB(R, G, B);
            Image::Pixel color(R, G, B, 0xFF);

            auto x0 = int(svgOffX + segment.bounds.x0 * svgScale);
            auto y0 = int(svgOffY + segment.bounds.y0 * svgScale);
            auto x1 = int(svgOffX + segment.bounds.x1 * svgScale);
            auto y1 = int(svgOffY + segment.bounds.y1 * svgScale);

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

            // segment on dummy display
            for (NSVGshape* shape = svgImage->shapes; shape != nullptr; shape = shape->next)
            {
                if (shape->title == title)
                {
                    auto x0 = int(svgOffX + shape->bounds[0] * svgScale) / pxlS;
                    auto y0 = int(svgOffY + shape->bounds[1] * svgScale) / pxlS - gnw.GetConfig().exp;
                    auto x1 = int(svgOffX + shape->bounds[2] * svgScale) / pxlS;
                    auto y1 = int(svgOffY + shape->bounds[3] * svgScale) / pxlS - gnw.GetConfig().exp;

                    for (int y = y0; y <= y1; ++y)
                    {
                        for (int x = x0; x <= x1; ++x)
                        {
                            imgDum.SetPixel(x, y, color);
                        }
                    }
                }
            }
        }

        // graphics on dummy display
        srand(0);
        Image::Pixel black(0,0, 0, 0xFF);
        for (int i = 0; i < 30; ++i)
        {
            int x = rand() % lcdW;
            int y = rand() % lcdH;
            int x0 = std::max(x - 3, 0);
            int y0 = std::max(y - 3, 0);
            int x1 = std::min(x + 3, lcdW - 1);
            int y1 = std::min(y + 3, lcdH - 1);
            for (int yy = y0; yy <= y1; ++yy)
                if (imgDum.GetPixel(x, yy).m_a == 0)
                    imgDum.SetPixel(x, yy, black);
            for (int xx = x0; xx <= x1; ++xx)
                if (imgDum.GetPixel(xx, y).m_a == 0)
                    imgDum.SetPixel(xx, y, black);
        }

        std::cout << "\t\tsave to " << refFile << std::endl;
        imgSeg.Save(refFile);

        std::cout << "\t\tsave to " << dumFile << std::endl;
        imgDum.Save(dumFile);

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
    std::cout << "compile assets: " << gnw.GetName() << std::endl;

    Dump dump;
    int segments = dump.AddSection(gnw.GetName() + "_segments", "Display segments");
    int graphics = dump.AddSection(gnw.GetName() + "_graphics", "Display graphics");
    int firmware = dump.AddSection(gnw.GetName() + "_firmware", "Firmware dump");
    int controls = dump.AddSection(gnw.GetName() + "_controls", "Controls configuration");
    std::string hppFile = gnw.GetCodePath() + gnw.GetName() + ".hpp";

    // -------------------------------------------------------------------------

    // TODO

    // -------------------------------------------------------------------------
    std::cout << "\tappend firmware data" << std::endl;
   
    dump[firmware].Append(gnw.GetConfig().rom);

    // -------------------------------------------------------------------------
    std::cout << "\tappend controls data" << std::endl;

    static const std::vector<std::string> c_names
    {
        "acl", "time", "game_b", "game_a", "alarm",
        "right_down", "right_up", "left_down", "left_up", "right", "left",
        "cheat"
    };
    static const std::vector<std::string> c_signals
    {
        "gnd", "vcc", "mcu_r2", "mcu_r3", "mcu_r4"
    };
    static const std::vector<std::string> c_inputs
    {
        "mcu_acl", "mcu_k1", "mcu_k2", "mcu_k3", "mcu_k4", "mcu_alpha", "mcu_beta"
    };
    auto index = [](const std::vector<std::string>& strings, const std::string string) -> int
    {
        for (size_t i = 0; i < strings.size(); ++i)
        {
            if (strings[i] == string) return int(i);
        }
        return -1;
    };

    std::string keys = "keys:";
    for (auto& key : gnw.GetConfig().keys)
    {
        int nIdx = index(c_names, key.name);
        int sIdx = index(c_signals, key.signal);
        int iIdx = index(c_inputs, key.input);

        if (nIdx >= 0 && sIdx >= 0 && iIdx >= 0)
        {
            dump[controls].Append(uint8_t(nIdx));
            dump[controls].Append(uint8_t(sIdx << 4 | iIdx));
            keys = keys + " " + key.name;
        }
    }
    dump[controls].AddComment(keys);
    dump[controls].AddSize();

    // -------------------------------------------------------------------------

    std::cout << "\t\tsave to " << hppFile << std::endl;
    dump.Save(hppFile);

    std::cout << std::endl;
    return true;
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
                if (!PrepareForPixelArt(GNW(game))) return EXIT_FAILURE;
            }
            return EXIT_SUCCESS;
        }
        if (command == "compile-assets")
        {
            for (const auto& game : games)
            {
                if (!CompileAssets(GNW(game))) return EXIT_FAILURE;
            }
            return EXIT_SUCCESS;
        }
    }
    return EXIT_FAILURE;
}
