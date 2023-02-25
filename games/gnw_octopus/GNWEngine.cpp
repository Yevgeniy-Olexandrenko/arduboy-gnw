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

    // TODO: init with controls config
    // TODO: init mcu with firmware
    // TODO: do system power on
}

void GNWEngine::powerOff()
{
    // TODO
}

void GNWEngine::drawLCD()
{
    drawGraphics();
    drawSegments();
}

void GNWEngine::SetBuzzerLevel(bool level)
{
    // TODO
}

// -----------------------------------------------------------------------------

void GNWEngine::drawGraphics()
{
    for (uint8_t block = 0; block < 128; ++block)
    {
        uint16_t addr = pgm_read_word(m_graphics + sizeof(uint16_t) * block);
        if (addr != 0x0000)
        {
            int16_t x = (block & 0x0F) << 3;
            int16_t y = (block & 0x70) >> 1;
            Sprites::drawOverwrite(x, y, m_sprites + addr, 0);
        }
    }
}

void GNWEngine::drawSegments()
{
    for (uint8_t segment = 0; segment < 72; ++segment)
    {
        uint16_t addr = pgm_read_word(m_segments + sizeof(uint32_t) * segment + 2);
        if (addr != 0xFFFF)
        {
            int16_t x = pgm_read_byte(m_segments + sizeof(uint32_t) * segment + 0);
            int16_t y = pgm_read_byte(m_segments + sizeof(uint32_t) * segment + 1);
            Sprites::drawSelfMasked(x, y, m_sprites + addr, 0);
        }
    }
}

// -----------------------------------------------------------------------------
