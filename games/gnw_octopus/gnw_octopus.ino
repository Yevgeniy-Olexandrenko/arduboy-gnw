#include "ArduboyGNW.h"
#include "gnw_octopus.hpp"

Arduboy2Base arduboy;
ArduboyGNW gnw(arduboy);

enum State { None = 0x00, Demo, GameA, GameB, Loss };

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
    // flash yellow when take or unload the gold
    bool take = gnw.segmentVisible(int(gnw_octopus_segment::take));
    bool unload = gnw.segmentVisible(int(gnw_octopus_segment::unload));

    // flash red during death
    bool death = gnw.segmentVisible(int(gnw_octopus_segment::death));

    // update current state
    switch (gnw.updateState(detectState()))
    {
        case State::None:
            gnw.setInput(GameAndWatch::TIME, true);
            break;

        case State::Demo:
            gnw.setInput(GameAndWatch::GAME_A, arduboy.pressed(A_BUTTON));
            gnw.setInput(GameAndWatch::GAME_B, arduboy.pressed(B_BUTTON));
            arduboy.digitalWriteRGB(RGB_OFF, RGB_OFF, RGB_OFF);
            break;

        case State::GameA:
        case State::GameB:
        {   gnw.setInput(GameAndWatch::LEFT,  arduboy.anyPressed(LEFT_BUTTON  | A_BUTTON));
            gnw.setInput(GameAndWatch::RIGHT, arduboy.anyPressed(RIGHT_BUTTON | B_BUTTON));
            uint8_t r = (take | unload | death ? RGB_ON : RGB_OFF);
            uint8_t g = (take | unload ? RGB_ON : RGB_OFF);
            arduboy.digitalWriteRGB(r, g, RGB_OFF);
        }   break;

        case State::Loss:
        {   gnw.setInput(GameAndWatch::TIME, gnw.anyButtonPressed());
            uint8_t r = (death ? RGB_ON : RGB_OFF);
            arduboy.digitalWriteRGB(r, RGB_OFF, RGB_OFF);
        }   break;
    }

    if (gnw.nextFrame())
    {
        gnw.drawLCD();
        arduboy.display();
    }
    arduboy.idle();
}
