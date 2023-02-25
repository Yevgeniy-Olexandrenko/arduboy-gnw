#include "GNWEngine.h"
#include "gnw_octopus.hpp"

Arduboy2Base arduboy;
GNWEngine gnw(arduboy);
Sprites sprites;

void setup()
{
    gnw.begin();
    gnw.powerOn(
        gnw_octopus_controls,
        gnw_octopus_segments,
        gnw_octopus_graphics,
        gnw_octopus_sprites,
        gnw_octopus_firmware
    );
    
    arduboy.invert(true);
    arduboy.setFrameRate(32);
}

void loop()
{
    gnw.setInput(GameAndWatch::RIGHT,  arduboy.pressed(RIGHT_BUTTON));
    gnw.setInput(GameAndWatch::LEFT,   arduboy.pressed(LEFT_BUTTON));
    gnw.setInput(GameAndWatch::GAME_A, arduboy.pressed(A_BUTTON));
    gnw.setInput(GameAndWatch::TIME,   arduboy.pressed(B_BUTTON));
    
    if (gnw.nextFrame())
    {
        gnw.drawLCD();
        arduboy.display();
    }

    arduboy.idle();
}
