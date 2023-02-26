#include <iostream>
#include <fstream>
#include <map>

#include "builder_compile.h"
#include "builder_config.h"
#include "Image.h"

namespace
{
    static const std::vector<std::string> c_names
    {
        "time", "game_b", "game_a", "alarm",
        "right_down", "right_up", "left_down", "left_up",
        "right", "left", "cheat_a", "cheat_b", "acl"
    };

    static const std::vector<std::string> c_signals
    {
        "gnd", "vcc", "mcu_r2", "mcu_r3", "mcu_r4"
    };

    static const std::vector<std::string> c_inputs
    {
        "mcu_acl", "mcu_k1", "mcu_k2", "mcu_k3", "mcu_k4",
        "mcu_alpha", "mcu_beta", 
    };

    const int StringIndex(const std::vector<std::string>& strings, const std::string string)
    {
        for (size_t i = 0; i < strings.size(); ++i)
        {
            if (strings[i] == string) return int(i);
        }
        return -1;
    };
}

Compile::Compile(const GNW& gnw)
	: m_gnw(gnw)
    , m_displaySegments(nullptr)
    , m_displayGraphics(nullptr)
    , m_controls(-1)
    , m_segments(-1)
    , m_graphics(-1)
    , m_sprites (-1)
    , m_firmware(-1)
    , m_fw_fixed(-1)
{
}

Compile::~Compile()
{
    delete m_displaySegments;
    delete m_displayGraphics;
}

bool Compile::CompileAssets()
{
	std::cout << "compile assets: " << m_gnw.GetName() << std::endl;

    if (OpenLCD())
    {
        // prepare sections
        m_controls = m_dump.AddSection(new Dump::Array(m_gnw.GetName() + "_controls", "Controls configuration"));
        m_segments = m_dump.AddSection(new Dump::Array(m_gnw.GetName() + "_segments", "Segments rendering info"));
        m_graphics = m_dump.AddSection(new Dump::Array(m_gnw.GetName() + "_graphics", "Graphics rendering info"));
        m_sprites  = m_dump.AddSection(new Dump::Array(m_gnw.GetName() + "_sprites",  "Sprites for rendering"));
        m_firmware = m_dump.AddSection(new Dump::Array(m_gnw.GetName() + "_firmware", "Firmware dump"));
        if (!m_gnw.GetConfig().firmware[1].empty())
        {
            m_fw_fixed = m_dump.AddSection(new Dump::Array(m_gnw.GetName() + "_fw_fixed", "Firmware dump with fixes"));
        }

        // do all work
        CollectSegmentsInfo();
        std::cout << "\tdecoded " << m_segmentIdToSegment.size() << " segments" << std::endl;

        std::cout << "\trender segments sprites" << std::endl;
        RenderSegmentsSprites();

        std::cout << "\trender graphics sprites" << std::endl;
        RenderGraphicsSprites();

        std::cout << "\twrite sprites data" << std::endl;
        DumpSpritesSection();

        std::cout << "\twrite segments data" << std::endl;
        DumpSegmentsSection();

        std::cout << "\twrite graphics data" << std::endl;
        DumpGraphicsSection();

        std::cout << "\twrite firmware data" << std::endl;
        DumpFirmwareSection();

        std::cout << "\twrite controls data" << std::endl;
        DumpControlsSection();

        // save dump
        std::string file = m_gnw.GetCodePath() + m_gnw.GetName() + ".hpp";
        std::cout << "\t\tsave to " << file << std::endl;
        m_dump.Save(file);

        std::cout << std::endl;
        return true;
    }

    std::cout << std::endl;
	return false;
}

bool Compile::OpenLCD()
{
    std::string displaySegmentsFile = m_gnw.GetAssetPath("segments.png");
    std::string displayGraphicsFile = m_gnw.GetAssetPath("graphics.png");

    m_displaySegments = new Image(displaySegmentsFile, Image::Format8888);
    if (m_displaySegments && (m_displaySegments->GetW() != lcdW || m_displaySegments->GetH() != lcdH))
    {
        std::cout << "ERROR: defective PNG!" << std::endl;
        std::cout << displaySegmentsFile << std::endl;
        return false;
    }

    m_displayGraphics = new Image(displayGraphicsFile, Image::Format8888);
    if (m_displayGraphics && (m_displayGraphics->GetW() != lcdW || m_displayGraphics->GetH() != lcdH))
    {
        std::cout << "ERROR: defective PNG!" << std::endl;
        std::cout << displayGraphicsFile << std::endl;
        return false;
    }

    return true;
}

void Compile::CollectSegmentsInfo()
{
    for (int y = 0; y < lcdH; ++y)
    {
        for (int x = 0; x < lcdW; ++x)
        {
            Image::Pixel color = m_displaySegments->GetPixel(x, y);
            if (color.m_a > 0 && (color.m_r > 0 || color.m_g > 0 || color.m_b > 0))
            {
                Segment segment;
                SegmentId segmentId;
                segment.SetByRGB(color.m_r, color.m_g, color.m_b);
                segment.GetAsINT(segmentId);

                m_segmentIdToSegment[segmentId].SetByINT(segmentId);
                m_segmentIdToSegment[segmentId].UpdateTL(float(x), float(y));
                m_segmentIdToSegment[segmentId].UpdateBR(float(x), float(y));
            }
        }
    }

#if SAVE_LIST_OF_SEGMENTS
    std::ofstream stream(m_gnw.GetAssetsPath() + "segments.decoded.log");
    for (auto& pair : m_segmentIdToSegment) pair.second.Write(stream);
    stream.close();
#endif
}

void Compile::RenderSegmentsSprites()
{
    for (auto& pair : m_segmentIdToSegment)
    {
        auto& segmentId = pair.first;
        auto& segment = pair.second;

        auto x0 = int(segment.bounds.x0);
        auto y0 = int(segment.bounds.y0);
        auto x1 = int(segment.bounds.x1);
        auto y1 = int(segment.bounds.y1);
        auto sw = x1 - x0 + 1;
        auto sh = y1 - y0 + 1;

        // sprite height must be a multiple of 8
        sh = ((sh + 7) / 8) * 8;

        int R, G, B;
        segment.GetAsRGB(R, G, B);
        Image::Pixel color(R, G, B);

        Sprite sprite;
        sprite.reset(new Image(sw, sh, false));
        for (int y = y0; y <= y1; ++y)
        {
            for (int x = x0; x <= x1; ++x)
            {
                Image::Pixel pixel = m_displaySegments->GetPixel(x, y);
                if (pixel.hash() == color.hash())
                {
                    sprite->SetPixel(x - x0, y - y0, Image::Pixel(0xFF, 0xFF, 0xFF));
                }
            }
        }

        SpriteId spriteId = 0;
        spriteId = crc32(spriteId, sprite->GetBytes(), sprite->GetBytesCount());
        m_spriteIdToSegmentsSprite[spriteId] = sprite;
        m_segmentIdToSpriteId[segmentId] = spriteId;
    }
}

void Compile::RenderGraphicsSprites()
{
    for (GraphicsId graphicsId = 0; graphicsId < (lcdH * lcdW / (8 * 8)); ++graphicsId)
    {
        int x0 = (graphicsId % (lcdW / 8)) * 8;
        int y0 = (graphicsId / (lcdW / 8)) * 8;

        Sprite sprite;
        sprite.reset(new Image(8, 8, false));
        Image::Pixel color(0xFF, 0xFF, 0xFF);

        for (int y = y0; y < y0 + 8; ++y)
        {
            for (int x = x0; x < x0 + 8; ++x)
            {
                Image::Pixel pixel = m_displayGraphics->GetPixel(x, y);
                if (pixel.m_a != 0)
                {
                    sprite->SetPixel(x - x0, y - y0, color);
                }
            }
        }

        SpriteId spriteId = 0;
        spriteId = crc32(spriteId, sprite->GetBytes(), sprite->GetBytesCount());
        if (spriteId != 0x8BFF08F2) 
        {   
            // any non-empty block
            m_spriteIdToGraphicsSprite[spriteId] = sprite;
        }
        m_graphicsIdToSpriteId[graphicsId] = spriteId;
    }
}

void Compile::DumpSprite(const Sprite& sprite)
{
    auto& spritesArray = static_cast<Dump::Array&>(m_dump[m_sprites]);

    spritesArray.Append(uint8_t(sprite->GetW()));
    spritesArray.Append(uint8_t(sprite->GetH()));
    for (size_t p = 0; p < sprite->GetH() / 8; ++p)
    {
        for (size_t x = 0; x < sprite->GetW(); ++x)
        {
            uint8_t byte = 0;
            for (int b = 0; b < 8; ++b)
            {
                int y = p * 8 + b;
                if (sprite->GetPixel(x, y).hash() == 0xFFFFFFFF)
                {
                    byte |= 1 << b;
                }
            }
            spritesArray.Append(byte);
        }
    }
}

void Compile::DumpSpritesSection()
{
    auto& spritesArray = static_cast<Dump::Array&>(m_dump[m_sprites]);

    for (auto& pair : m_spriteIdToSegmentsSprite)
    {
        auto& spriteId = pair.first;
        auto& sprite = pair.second;

        m_spriteIdToOffset[spriteId] = spritesArray.GetOffset();
        DumpSprite(sprite);

#if SAVE_SPRITES_TO_FILES
        char buf[10]; itoa(spriteId, buf, 16);
        sprite->Save(m_gnw.GetAssetsPath() + "segments." + buf + ".png");
#endif
    }

    for (auto& pair : m_spriteIdToGraphicsSprite)
    {
        auto& spriteId = pair.first;
        auto& sprite = pair.second;

        m_spriteIdToOffset[spriteId] = spritesArray.GetOffset();
        DumpSprite(sprite);

#if SAVE_SPRITES_TO_FILES
        char buf[10]; itoa(spriteId, buf, 16);
        sprite->Save(m_gnw.GetAssetsPath() + "graphics." + buf + ".png");
#endif
    }
}

void Compile::DumpSegmentsSection()
{
    auto& segmentsArray = static_cast<Dump::Array&>(m_dump[m_segments]);

    for (SegmentId segmentId = 0; segmentId <= (8 << 3 | 3 << 1 | 1); ++segmentId)
    {
        if (m_segmentIdToSegment.find(segmentId) != m_segmentIdToSegment.end())
        {
            auto& segment  = m_segmentIdToSegment[segmentId];
            auto& spriteId = m_segmentIdToSpriteId[segmentId];
            auto& offset   = m_spriteIdToOffset[spriteId];

            segmentsArray.Append(uint8_t(segment.bounds.x0));
            segmentsArray.Append(uint8_t(segment.bounds.y0));
            segmentsArray.Append(uint8_t(offset >> 0));
            segmentsArray.Append(uint8_t(offset >> 8));
        }
        else
        {
            segmentsArray.Append(0xFF);
            segmentsArray.Append(0xFF);
            segmentsArray.Append(0xFF);
            segmentsArray.Append(0xFF);
        }
    }
}

void Compile::DumpGraphicsSection()
{
    auto& graphicsArray = static_cast<Dump::Array&>(m_dump[m_graphics]);

    for (GraphicsId graphicsId = 0; graphicsId < (lcdH * lcdW / (8 * 8)); ++graphicsId)
    {
        auto& spriteId = m_graphicsIdToSpriteId[graphicsId];
        if (spriteId == SpriteId(0x8BFF08F2))
        {
            // empty block
            graphicsArray.Append(0x00);
            graphicsArray.Append(0x00);
        }
        else
        {
            Offset offset = m_spriteIdToOffset[spriteId];
            graphicsArray.Append(uint8_t(offset >> 0));
            graphicsArray.Append(uint8_t(offset >> 8));
        }
    }
}

void Compile::DumpFirmwareSection()
{
    auto& firmwareArray = static_cast<Dump::Array&>(m_dump[m_firmware]);
    firmwareArray.Append(m_gnw.GetAssetsPath() + m_gnw.GetConfig().firmware[0]);

    if (m_fw_fixed != -1)
    {
        auto& fw_fixedArray = static_cast<Dump::Array&>(m_dump[m_fw_fixed]);
        fw_fixedArray.Append(m_gnw.GetAssetsPath() + m_gnw.GetConfig().firmware[1]);
    }
}

void Compile::DumpControlsSection()
{
    std::string keys = "keys:";

    std::vector<uint8_t> controls(c_names.size(), 0xFF);
    for (auto& key : m_gnw.GetConfig().keys)
    {
        int nIdx = StringIndex(c_names, key.name);
        int sIdx = StringIndex(c_signals, key.signal);
        int iIdx = StringIndex(c_inputs, key.input);

        if (nIdx >= 0 && sIdx >= 0 && iIdx >= 0)
        {
            controls[nIdx] = uint8_t(sIdx << 4 | iIdx);
            keys += " " + key.name;
        }
    }
    
    auto& controlsArray = static_cast<Dump::Array&>(m_dump[m_controls]);
    controlsArray.AddComment(keys);
    controlsArray.Append(controls);
}
