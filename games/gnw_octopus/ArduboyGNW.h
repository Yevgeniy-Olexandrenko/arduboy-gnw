#pragma once

#include <Arduboy2.h>
#include "GameAndWatch.h"

// An engine that emulates Game And Watch
// hardware using the Arduboy software library.

class ArduboyGNW : public GameAndWatch::Handler
{
public:
    ArduboyGNW(Arduboy2Base& arduboy);

    void begin();
    void powerOn(GNWData controls, GNWData segments, GNWData graphics, GNWData sprites, GNWData firmware);

    void setInput(GameAndWatch::Control control, bool active);
    void clearInput();
    
    bool segmentVisible(int i) const;
    bool nextFrame();
    void drawLCD();

    uint8_t updateState(uint8_t nextState);
    bool anyButtonPressed() const;

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
    uint8_t m_state;
    uint8_t m_lock;

    // game and watch related stuff
    GameAndWatch m_gnw;
};
