#include <iostream>
#include <vector>
#include <map>
#include <svg.h>
#include "Image.h"

// -----------------------------------------------------------------------------

const std::string path = "../../games/";

const int lcdW = 128;
const int lcdH = 64;
const int pxlS = 4;

// -----------------------------------------------------------------------------

using SegmentShapes = std::vector<NSVGshape*>;
using SegmentsMap   = std::map<std::string, SegmentShapes>;

void HSVtoRGB(float H, float S, float V, int& R, int& G, int& B) 
{
    if (H > 360 || H < 0 || S>100 || S < 0 || V>100 || V < 0) 
    {
        std::cout << "The givem HSV values are not in valid range" << std::endl;
        return;
    }

    float s = S / 100;
    float v = V / 100;
    float C = s * v;
    float X = C * (1 - abs(fmod(H / 60.0, 2) - 1));
    float m = v - C;
    float r, g, b;

    if (H >= 0 && H < 60)         { r = C, g = X, b = 0; }
    else if (H >= 60  && H < 120) { r = X, g = C, b = 0; }
    else if (H >= 120 && H < 180) { r = 0, g = C, b = X; }
    else if (H >= 180 && H < 240) { r = 0, g = X, b = C; }
    else if (H >= 240 && H < 300) { r = X, g = 0, b = C; }
    else                          { r = C, g = 0, b = X; }

    R = (r + m) * 255;
    G = (g + m) * 255;
    B = (b + m) * 255;
}

void PrepareForPixelArt(const std::string& gnw, int expH)
{
    std::cout << "prepare for pixel art: " << gnw << std::endl;

    std::string svgFile = path + gnw + "/assets/" + gnw + ".svg";
    std::string pxlFile = path + gnw + "/assets/" + gnw + ".pixels.png";
    std::string refFile = path + gnw + "/assets/" + gnw + ".reference.png";

    NSVGimage* svgImage = nsvgParseFromFile(svgFile.c_str(), "px", 96.0f);
    NSVGrasterizer* svgRasterizer = nsvgCreateRasterizer();

    if (svgImage)
    {
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

        auto ratio = (float(lcdW) / float(lcdH + 2 * expH));
        auto imgW = int(pxlS * lcdW);
        auto imgH = int(pxlS * lcdW / ratio);

        auto svgScale = std::min(imgW / svgImage->width, imgH / svgImage->height);
        auto svgOffX = int((imgW - svgImage->width * svgScale) / 2);
        auto svgOffY = int((imgH - svgImage->height * svgScale) / 2);

        // ---------------------------------------------------------------------
        std::cout << "\trender pixels layer asset" << std::endl;

        Image imgLcd(imgW, imgH, true);
        Image::Pixel lcdEdge(0xFF, 0x00, 0x00, 0x7F);
        Image::Pixel lcdCent(0x00, 0xFF, 0xFF, 0x7F);
        Image::Pixel lcdGrid(0x7F, 0x7F, 0x7F, 0x7F);

        int topEdge = (((imgH / pxlS) - lcdH) / 2) * pxlS;
        int botEdge = topEdge + lcdH * pxlS;

        for (int y = 0; y < imgLcd.GetH(); ++y)
        {
            for (int x = 0; x < imgLcd.GetW(); ++x)
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
            float x0 = shapes[0]->bounds[0];
            float y0 = shapes[0]->bounds[1];
            float x1 = shapes[0]->bounds[2];
            float y1 = shapes[0]->bounds[3];
            for (auto shape : shapes)
            {
                x0 = std::min(x0, shape->bounds[0]);
                y0 = std::min(y0, shape->bounds[1]);
                x1 = std::max(x1, shape->bounds[2]);
                y1 = std::max(y1, shape->bounds[3]);
            }
            x0 = int(svgOffX + x0 * svgScale);
            y0 = int(svgOffY + y0 * svgScale);
            x1 = int(svgOffX + x1 * svgScale);
            y1 = int(svgOffY + y1 * svgScale);

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
    }
    else
    {
        std::cout << "ERROR: could not open SVG!" << std::endl;
        std::cout << svgFile << std::endl;
    }
    std::cout << std::endl;
}

int main()
{
    PrepareForPixelArt("gnw_ball",    7);
    PrepareForPixelArt("gnw_octopus", 5);
    PrepareForPixelArt("gnw_mmouse",  5);
}
