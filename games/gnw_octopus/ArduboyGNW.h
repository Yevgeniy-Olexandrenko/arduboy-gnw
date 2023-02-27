#pragma once

#include <Arduboy2.h>
#include "GameAndWatch.h"

// An engine that emulates Game And Watch
// hardware using the Arduboy software library.

using GNWData = const uint8_t*;

class ArduboyGNW : public GameAndWatch::Handler
{
public:
    ArduboyGNW(Arduboy2Base& arduboy);

    void begin();
    void powerOn(GNWData controls, GNWData segments, GNWData graphics, GNWData sprites, GNWData firmware);

    void setInput(GameAndWatch::Control control, bool active);
    void clearInput();

    bool segmentVisible(int h, int o, int s) const;
    bool segmentVisible(int i) const;
    
    bool nextFrame();
    void drawLCD();

public: // GameAndWatch::Handler
    void SetBuzzerLevel(bool level) override;

private:
    void DrawGraphics();
    void DrawSegments();

private:
    // arduboy related stuff
    Arduboy2Base& m_arduboy;
    GNWData m_segments;
    GNWData m_graphics;
    GNWData m_sprites;

    // game and watch related stuff
    GameAndWatch m_gnw;
};
