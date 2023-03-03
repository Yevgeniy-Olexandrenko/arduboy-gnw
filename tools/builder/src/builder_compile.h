#pragma once

#include <map>
#include "GNW.h"
#include "Dump.h"
#include "Segment.h"

class Image;
using Sprite = std::shared_ptr<Image>;

using SpriteId = uint32_t;
using SpriteIdTpSprite = std::map<SpriteId, Sprite>;

using Offset = int;
using SpriteIdToOffset = std::map<SpriteId, Offset>;

using SegmentId = int;
using SegmentIdToSegment = std::map<SegmentId, Segment>;

using GraphicsId = int;
using SegmentIdToSpriteId = std::map<SegmentId, SpriteId>;
using GraphicsIdToSpriteId = std::map<GraphicsId, SpriteId>;


class Compile
{
public:
	Compile(const GNW& gnw);
	~Compile();

	bool CompileAssets();

private:
	bool OpenLCD();
	void CollectSegmentsInfo();
	void RenderSegmentsSprites();
	void RenderGraphicsSprites();
	void DumpSprite(const Sprite& sprite, bool writeSize);
	void DumpSpritesSection();
	void DumpSegmentsSection();
	void DumpGraphicsSection();
	void DumpFirmwareSection();
	void DumpControlsSection();

private:
	const GNW& m_gnw;

	Image* m_displaySegments;
	Image* m_displayGraphics;

	Dump m_dump;
	int  m_controls;
	int  m_segments;
	int  m_seg_idx;
	int  m_graphics;
	int  m_gfxtiles;
	int  m_firmware;
	int  m_fw_fixed;

	SegmentIdToSegment m_segmentIdToSegment;
	SegmentIdToSpriteId m_segmentIdToSpriteId;
	GraphicsIdToSpriteId m_graphicsIdToSpriteId;

	SpriteIdTpSprite m_spriteIdToSegmentsSprite;
	SpriteIdTpSprite m_spriteIdToGraphicsSprite;
	SpriteIdToOffset m_spriteIdToOffset;
};
