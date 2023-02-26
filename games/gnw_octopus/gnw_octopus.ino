#include "ArduboyGNW.h"
#include "gnw_octopus.hpp"

Arduboy2Base arduboy;
ArduboyGNW gnw(arduboy);

enum class State
{
    None, Demo, GameA, GameB, Loss
};

State detectState()
{
    bool time   = gnw.segmentVisible(int(gnw_octopus_segment::time  ));
    bool game_a = gnw.segmentVisible(int(gnw_octopus_segment::game_a));
    bool game_b = gnw.segmentVisible(int(gnw_octopus_segment::game_b));
    bool death  = gnw.segmentVisible(int(gnw_octopus_segment::death ));
    bool man1   = gnw.segmentVisible(int(gnw_octopus_segment::man1  ));
    bool man2   = gnw.segmentVisible(int(gnw_octopus_segment::man2  ));
    bool man3   = gnw.segmentVisible(int(gnw_octopus_segment::man3  ));

    if (time && !game_a && !game_b) return State::Demo;
    if (!time && death && !man1 && !man2 && !man3) return State::Loss;
    if (!time && game_a) return State::GameA;
    if (!time && game_b) return State::GameB;
    return State::None;
}

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

    switch (detectState())
    {
        case State::None:
            arduboy.digitalWriteRGB(RGB_OFF, RGB_OFF, RGB_OFF); // black
            break;
        case State::Demo:
            arduboy.digitalWriteRGB(RGB_OFF, RGB_ON, RGB_OFF);  // green
            break;
        case State::GameA:
            arduboy.digitalWriteRGB(RGB_OFF, RGB_ON, RGB_ON);   // cyan
            break;
        case State::GameB:
            arduboy.digitalWriteRGB(RGB_ON, RGB_OFF, RGB_ON);   // magenta
            break;
        case State::Loss:
            arduboy.digitalWriteRGB(RGB_ON, RGB_OFF, RGB_OFF);  // red
            break;
    }
    arduboy.idle();
}
