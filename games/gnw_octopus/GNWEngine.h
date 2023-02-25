#pragma once

#include <Arduboy2.h>
#include "GameAndWatch.h"

// An engine that emulates Game And Watch
// hardware using the Arduboy software library.

using GNWData = const uint8_t*;

class GNWEngine
{
public:
    GNWEngine(Arduboy2Base& arduboy);

    void begin();
    void powerOn(GNWData controls, GNWData segments, GNWData graphics, GNWData sprites, GNWData firmware);
    void powerOff();
    void drawLCD();

private:
    void drawGraphics();
    void drawSegments();

private:
    // arduboy related stuff
    Arduboy2Base& m_arduboy;
    GNWData m_segments;
    GNWData m_graphics;
    GNWData m_sprites;

    // game and watch related stuff
    GameAndWatch m_gnw;
};
