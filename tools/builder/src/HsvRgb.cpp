#include <algorithm>

// Convert RGB to HSV color space
void RGBtoHSV(int R, int G, int B, float& H, float& S, float& V)
{
	auto r = R / 255.f, g = G / 255.f, b = B / 255.f;
	auto cmax = std::max(std::max(r, g), b);
	auto cmin = std::min(std::min(r, g), b);
	auto delta = cmax - cmin;

	if (delta > 0) 
	{
		if (cmax == r)
			H = 60 * (fmodf(((g - b) / delta), 6));
		else if (cmax == g)
			H = 60 * (((b - r) / delta) + 2);
		else if (cmax == b)
			H = 60 * (((r - g) / delta) + 4);
		if (cmax > 0)
			S = 100 * delta / cmax;
		else
			S = 0;
	}
	else
	{
		H = 0;
		S = 0;
	}
	V = 100 * cmax;
	if (H < 0) H += 360;
}

// Convert HSV to RGB color space
void HSVtoRGB(float H, float S, float V, int& R, int& G, int& B)
{
	auto s = S / 100, v = V / 100;
	auto c = v * s;
	auto h = fmodf(H / 60, 6);
	auto x = c * (1 - fabsf(fmodf(h, 2) - 1));
	auto m = v - c;

	float r, g, b;
	if (0 <= h && h < 1)      { r = c; g = x; b = 0; }
	else if (1 <= h && h < 2) { r = x; g = c; b = 0; }
	else if (2 <= h && h < 3) { r = 0; g = c; b = x; }
	else if (3 <= h && h < 4) { r = 0; g = x; b = c; }
	else if (4 <= h && h < 5) { r = x; g = 0; b = c; }
	else                      { r = c; g = 0; b = x; }

	R = int((r + m) * 255);
	G = int((g + m) * 255);
	B = int((b + m) * 255);
}
