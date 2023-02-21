#pragma once

#include <map>
#include <svg.h>
#include "GNW.h"
#include "Segment.h"

using SegmentId = int;
using SegmentIdToSegment = std::map<SegmentId, Segment>;

class Prepare
{
public:
	Prepare(const GNW& gnw);
	~Prepare();

	bool PrepareForPixelArt();

private:
	bool OpenSVG();
	void CollectSegmentsInfo();
	void RenderLCDScreen();
	void RenderReference();
	void RenderDummyLCD();

private:
	const GNW& m_gnw;

	size_t m_imgW;
	size_t m_imgH;

	NSVGimage* m_svg;
	float m_svgScale;
	float m_svgXOffset;
	float m_svgYOffset;

	SegmentIdToSegment m_segmentIdToSegment;
};
