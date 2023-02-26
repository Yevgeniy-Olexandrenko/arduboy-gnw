#include "ArduboyGNW.h"
#include "gnw_octopus.hpp"

Arduboy2Base arduboy;
ArduboyGNW gnw(arduboy);
Sprites sprites;
bool gameplay;

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
#if 0
    while (gnw.inReset())
    {
        arduboy.idle();
    }

    gameplay = false;
    gnw.toggleInput(GameAndWatch::TIME);
#endif
}

void loop()
{
#if 0
    if (gnw.inGame() == gameplay)
    {
        if (!gameplay)
        {
            gnw.setInput(GameAndWatch::TIME,  false);
            gnw.setInput(GameAndWatch::RIGHT, false);
            gnw.setInput(GameAndWatch::LEFT,  false);

            if (gnw.setInput(GameAndWatch::GAME_A, arduboy.pressed(A_BUTTON)))
            {
                gameplay = true;
            }
            if (gnw.setInput(GameAndWatch::GAME_B, arduboy.pressed(B_BUTTON)))
            {
                gameplay = true;
            }
        }
        else
        {
            gnw.setInput(GameAndWatch::TIME,   false);
            gnw.setInput(GameAndWatch::GAME_A, false);
            gnw.setInput(GameAndWatch::GAME_B, false);
            
            gnw.setInput(GameAndWatch::RIGHT, arduboy.pressed(RIGHT_BUTTON) | arduboy.pressed(B_BUTTON));
            gnw.setInput(GameAndWatch::LEFT,  arduboy.pressed(LEFT_BUTTON)  | arduboy.pressed(A_BUTTON));
        }
    }
    else
    {
        if (gameplay)
        {
            if (gnw.setInput(GameAndWatch::TIME, arduboy.pressed(A_BUTTON) | arduboy.pressed(B_BUTTON)))
            {
                gameplay = false;
            }
        }
    }
#else
    gnw.setInput(GameAndWatch::ACL,    arduboy.pressed(UP_BUTTON));
    gnw.setInput(GameAndWatch::TIME,   arduboy.pressed(DOWN_BUTTON));
    gnw.setInput(GameAndWatch::GAME_A, arduboy.pressed(A_BUTTON));
    gnw.setInput(GameAndWatch::GAME_B, arduboy.pressed(B_BUTTON));
    gnw.setInput(GameAndWatch::RIGHT,  arduboy.pressed(RIGHT_BUTTON));
    gnw.setInput(GameAndWatch::LEFT,   arduboy.pressed(LEFT_BUTTON));    
#endif

    if (gnw.nextFrame())
    {
        gnw.drawLCD();
        arduboy.display();
    }

    arduboy.digitalWriteRGB(BLUE_LED, gnw.inGame() ? RGB_ON : RGB_OFF);
    arduboy.idle();
}
