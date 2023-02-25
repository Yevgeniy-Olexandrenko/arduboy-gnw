#include "GNWEngine.h"

GNWEngine::GNWEngine(Arduboy2Base& arduboy)
    : m_arduboy(arduboy)
    , m_segments(nullptr)
    , m_graphics(nullptr)
    , m_sprites(nullptr)
    , m_gnw(this)
{
}

void GNWEngine::begin()
{
    m_arduboy.begin();

    // TODO
}

void GNWEngine::powerOn(GNWData controls, GNWData segments, GNWData graphics, GNWData sprites, GNWData firmware)
{
    m_segments = segments;
    m_graphics = graphics;
    m_sprites  = sprites;

    m_gnw.PowerOn(controls, firmware);

    // TODO
}

void GNWEngine::setInput(GameAndWatch::Control control, bool active)
{
    m_gnw.SetControl(control, active);
}

bool GNWEngine::nextFrame()
{
    if (m_arduboy.nextFrame())
    {
        return m_gnw.HasNewFrame();
    }
    return false;
}

void GNWEngine::drawLCD()
{
    DrawGraphics();
    DrawSegments();
}

// -----------------------------------------------------------------------------

void GNWEngine::SetBuzzerLevel(bool level)
{
    // TODO
}

// -----------------------------------------------------------------------------

void GNWEngine::DrawGraphics()
{
    for (uint8_t block = 0; block < 128; ++block)
    {
        uint16_t addr = pgm_read_word(m_graphics + sizeof(uint16_t) * block);
        if (addr == 0x0000)
        {
            // draw blank block 8x8
            uint8_t* pointer = (m_arduboy.getBuffer() + (block << 3));
            for (int i = 0; i < 8; ++i) pointer[i] = 0;
        }
        else
        {
            // draw block using sprite 8x8
            int16_t x = (block & 0x0F) << 3;
            int16_t y = (block & 0x70) >> 1;
            Sprites::drawOverwrite(x, y, m_sprites + addr, 0);
        }
    }
}

void GNWEngine::DrawSegments()
{
    for (uint8_t segment = 0; segment < 72; ++segment)
    {
        uint16_t addr = pgm_read_word(m_segments + sizeof(uint32_t) * segment + 2);
        if (addr != 0xFFFF && m_gnw.IsSegmentVisible(segment))
        {
            int16_t x = pgm_read_byte(m_segments + sizeof(uint32_t) * segment + 0);
            int16_t y = pgm_read_byte(m_segments + sizeof(uint32_t) * segment + 1);
            Sprites::drawSelfMasked(x, y, m_sprites + addr, 0);
        }
    }
}

// -----------------------------------------------------------------------------
