#include <iostream>
#include <fstream>
#include <map>

#include "builder_compile.h"
#include "builder_config.h"
#include "Image.h"

#define SAVE_SPRITES_TO_FILES 0

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
        "mcu_k1", "mcu_k2", "mcu_k3", "mcu_k4",
        "mcu_alpha", "mcu_beta", "mcu_acl"
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
    , m_lcd(nullptr)
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
    delete m_lcd;
}

bool Compile::CompileAssets()
{
	std::cout << "compile assets: " << m_gnw.GetName() << std::endl;

    if (OpenLCD())
    {
        // prepare sections
        m_controls = m_dump.AddSection(m_gnw.GetName() + "_controls", "Controls configuration");
        m_segments = m_dump.AddSection(m_gnw.GetName() + "_segments", "Segments rendering info");
        m_graphics = m_dump.AddSection(m_gnw.GetName() + "_graphics", "Graphics rendering info");
        m_sprites  = m_dump.AddSection(m_gnw.GetName() + "_sprites",  "Sprites for rendering");
        m_firmware = m_dump.AddSection(m_gnw.GetName() + "_firmware", "Firmware dump");
        if (!m_gnw.GetConfig().firmware[1].empty())
        {
            m_fw_fixed = m_dump.AddSection(m_gnw.GetName() + "_fw_fixed", "Firmware dump with fixes");
        }

        // do all work
        CollectSegmentsInfo();
        RenderSegmentsSprites();
        RenderGraphicsSprites();
        DumpSpritesSection();
        DumpSegmentsSection();
        DumpGraphicsSection();
        DumpFirmwareSection();
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
    std::string lcdFile = m_gnw.GetAssetPath("png");
    m_lcd = new Image(lcdFile, Image::Format8888);

    if (m_lcd && m_lcd->GetW() == lcdW && m_lcd->GetH() == lcdH)
    {
        return true;
    }

    std::cout << "ERROR: defective display PNG!" << std::endl;
    std::cout << lcdFile << std::endl;
    return false;
}

void Compile::CollectSegmentsInfo()
{
    for (int y = 0; y < lcdH; ++y)
    {
        for (int x = 0; x < lcdW; ++x)
        {
            Image::Pixel color = m_lcd->GetPixel(x, y);
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

    std::cout << "\tdecoded " << m_segmentIdToSegment.size() << " segments" << std::endl;
    std::ofstream stream(m_gnw.GetAssetsPath() + "segments.decoded.log");
    for (auto& pair : m_segmentIdToSegment) pair.second.Write(stream);
    stream.close();
}

void Compile::RenderSegmentsSprites()
{
    std::cout << "\trender segments sprites" << std::endl;

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
                Image::Pixel pixel = m_lcd->GetPixel(x, y);
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
    std::cout << "\trender graphics sprites" << std::endl;

    for (GraphicsId graphicsId = 0; graphicsId < (lcdH * lcdW / (8 * 8)); ++graphicsId)
    {
        int x0 = (graphicsId % (lcdW / 8)) * 8;
        int y0 = (graphicsId / (lcdW / 8)) * 8;

        Sprite sprite;
        sprite.reset(new Image(8, 8, false));
        for (int y = y0; y < y0 + 8; ++y)
        {
            for (int x = x0; x < x0 + 8; ++x)
            {
                Image::Pixel pixel = m_lcd->GetPixel(x, y);
                if (pixel.hash() == 0xFF000000)
                {
                    sprite->SetPixel(x - x0, y - y0, Image::Pixel(0xFF, 0xFF, 0xFF));
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
    m_dump[m_sprites].Append(uint8_t(sprite->GetW()));
    m_dump[m_sprites].Append(uint8_t(sprite->GetH()));

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
            m_dump[m_sprites].Append(byte);
        }
    }
}

void Compile::DumpSpritesSection()
{
    std::cout << "\twrite sprites data" << std::endl;

    for (auto& pair : m_spriteIdToSegmentsSprite)
    {
        auto& spriteId = pair.first;
        auto& sprite = pair.second;

        m_spriteIdToOffset[spriteId] = m_dump[m_sprites].GetOffset();
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

        m_spriteIdToOffset[spriteId] = m_dump[m_sprites].GetOffset();
        DumpSprite(sprite);

#if SAVE_SPRITES_TO_FILES
        char buf[10]; itoa(spriteId, buf, 16);
        sprite->Save(m_gnw.GetAssetsPath() + "graphics." + buf + ".png");
#endif
    }
}

void Compile::DumpSegmentsSection()
{
    std::cout << "\twrite segments data" << std::endl;

    for (SegmentId segmentId = 0; segmentId <= (8 << 3 | 3 << 1 | 1); ++segmentId)
    {
        if (m_segmentIdToSegment.find(segmentId) != m_segmentIdToSegment.end())
        {
            auto& segment  = m_segmentIdToSegment[segmentId];
            auto& spriteId = m_segmentIdToSpriteId[segmentId];
            auto& offset   = m_spriteIdToOffset[spriteId];

            m_dump[m_segments].Append(uint8_t(segment.bounds.x0));
            m_dump[m_segments].Append(uint8_t(segment.bounds.y0));
            m_dump[m_segments].Append(uint8_t(offset >> 0));
            m_dump[m_segments].Append(uint8_t(offset >> 8));
        }
        else
        {
            m_dump[m_segments].Append(0xFF);
            m_dump[m_segments].Append(0xFF);
            m_dump[m_segments].Append(0xFF);
            m_dump[m_segments].Append(0xFF);
        }
    }
}

void Compile::DumpGraphicsSection()
{
    std::cout << "\twrite graphics data" << std::endl;

    for (GraphicsId graphicsId = 0; graphicsId < (lcdH * lcdW / (8 * 8)); ++graphicsId)
    {
        auto& spriteId = m_graphicsIdToSpriteId[graphicsId];
        if (spriteId == SpriteId(0x8BFF08F2))
        {
            // empty block
            m_dump[m_graphics].Append(0x00);
            m_dump[m_graphics].Append(0x00);
        }
        else
        {
            Offset offset = m_spriteIdToOffset[spriteId];
            m_dump[m_graphics].Append(uint8_t(offset >> 0));
            m_dump[m_graphics].Append(uint8_t(offset >> 8));
        }
    }
}

void Compile::DumpFirmwareSection()
{
    std::cout << "\twrite firmware data" << std::endl;

    m_dump[m_firmware].Append(m_gnw.GetAssetsPath() + m_gnw.GetConfig().firmware[0]);
    if (m_fw_fixed != -1)
    {
        m_dump[m_fw_fixed].Append(m_gnw.GetAssetsPath() + m_gnw.GetConfig().firmware[1]);
    }
}

void Compile::DumpControlsSection()
{
    std::cout << "\twrite controls data" << std::endl;

    std::string keys = "keys:";
    for (auto& key : m_gnw.GetConfig().keys)
    {
        int nIdx = StringIndex(c_names, key.name);
        int sIdx = StringIndex(c_signals, key.signal);
        int iIdx = StringIndex(c_inputs, key.input);

        if (nIdx >= 0 && sIdx >= 0 && iIdx >= 0)
        {
            m_dump[m_controls].Append(uint8_t(nIdx));
            m_dump[m_controls].Append(uint8_t(sIdx << 4 | iIdx));
            keys += " " + key.name;
        }
    }
    m_dump[m_controls].AddComment(keys);
    m_dump[m_controls].AddSize();
}
