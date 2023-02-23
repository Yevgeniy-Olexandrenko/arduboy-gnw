#include "GNWEngine.h"

GNWEngine::GNWEngine(Arduboy2Base& arduboy)
    : m_arduboy(arduboy)
    , m_segments(nullptr)
    , m_graphics(nullptr)
    , m_sprites(nullptr)
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
    // TODO
}