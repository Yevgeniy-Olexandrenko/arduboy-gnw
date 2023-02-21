#pragma once

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

    void SetBySTR(const std::string& str);
    void SetByRGB(int R, int G, int B);
    void SetByINT(int i);

    void GetAsSTR(std::string& str) const;
    void GetAsRGB(int& R, int& G, int& B) const;
    void GetAsHSV(float& H, float& S, float& V) const;
    void GetAsINT(int& i) const;

    void UpdateTL(float x, float y);
    void UpdateBR(float x, float y);

    void Write(std::ostream& stream) const;
};
