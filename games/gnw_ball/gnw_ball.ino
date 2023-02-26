#include "ArduboyGNW.h"
#include "gnw_ball.hpp"

Arduboy2Base arduboy;
ArduboyGNW gnw(arduboy);
Sprites sprites;

void setup()
{
    gnw.begin();
    gnw.powerOn(
        gnw_ball_controls,
        gnw_ball_segments,
        gnw_ball_graphics,
        gnw_ball_sprites,
        gnw_ball_firmware
    );
}

void loop()
{
    gnw.setInput(GameAndWatch::ACL,    arduboy.pressed(UP_BUTTON));
    gnw.setInput(GameAndWatch::TIME,   arduboy.pressed(DOWN_BUTTON));
    gnw.setInput(GameAndWatch::GAME_A, arduboy.pressed(A_BUTTON));
    gnw.setInput(GameAndWatch::GAME_B, arduboy.pressed(B_BUTTON));
    gnw.setInput(GameAndWatch::RIGHT,  arduboy.pressed(RIGHT_BUTTON));
    gnw.setInput(GameAndWatch::LEFT,   arduboy.pressed(LEFT_BUTTON));    

    if (gnw.nextFrame())
    {
        gnw.drawLCD();
        arduboy.display();
    }

    arduboy.digitalWriteRGB(BLUE_LED, gnw.inGame() ? RGB_ON : RGB_OFF);
    arduboy.idle();
}
