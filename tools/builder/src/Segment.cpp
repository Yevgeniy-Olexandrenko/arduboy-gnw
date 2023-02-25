#include <iostream>
#include "Segment.h"
#include "HsvRgb.h"

void Segment::SetBySTR(const std::string& str)
{
    if (!str.empty() && str.size() == 5 && str[1] == '.' && str[3] == '.')
    {
        o = str[0] - '0';
        s = str[2] - '0';
        h = str[4] - '0';
    }
}

void Segment::SetByRGB(int R, int G, int B)
{
    float H, S, V;
    RGBtoHSV(R, G, B, H, S, V);
    o = int(0.5f + 9.f * H / 360.f);
    s = int(0.5f + 3.f * (V - 25.f) / 75.f);
    h = int(0.5f + 1.f * (S - 25.f) / 75.f);
}

void Segment::SetByINT(int i)
{
    o = (i >> 3 & 0x0F);
    s = (i >> 0 & 0x03);
    h = (i >> 2 & 0x01);
}

void Segment::GetAsSTR(std::string& str) const
{
    str.resize(5);
    str[0] = o + '0';
    str[2] = s + '0';
    str[4] = h + '0';
    str[1] = str[3] = '.';
}

void Segment::GetAsRGB(int& R, int& G, int& B) const
{
    float H, S, V;
    GetAsHSV(H, S, V);
    HSVtoRGB(H, S, V, R, G, B);
}

void Segment::GetAsHSV(float& H, float& S, float& V) const
{
    H = 360.f * float(o) / 9.f;
    S = 25.f + 75.f * float(h) / 1.f;
    V = 25.f + 75.f * float(s) / 3.f;
}

void Segment::GetAsINT(int& i) const
{
    i = (o << 3 | s | h << 2);
}

void Segment::UpdateTL(float x, float y)
{
    bounds.x0 = std::min(bounds.x0, x);
    bounds.y0 = std::min(bounds.y0, y);
}

void Segment::UpdateBR(float x, float y)
{
    bounds.x1 = std::max(bounds.x1, x);
    bounds.y1 = std::max(bounds.y1, y);
}

void Segment::Write(std::ostream& stream) const
{
    std::string id;
    GetAsSTR(id);
    stream << id << ' ';

    int R, G, B;
    GetAsRGB(R, G, B);
    stream << "RGB(" << R << ',' << G << ',' << B << ')' << ' ';

    float H, S, V;
    GetAsHSV(H, S, V);
    stream << "HSV(" << H << ',' << S << ',' << V << ')' << std::endl;
}
