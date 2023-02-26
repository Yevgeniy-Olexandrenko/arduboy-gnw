#include "ArduboyGNW.h"
#include "gnw_octopus.hpp"

enum class State
{
    None, Demo, GameA, GameB, Loss
};

Arduboy2Base arduboy;
ArduboyGNW gnw(arduboy);
State state;

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

bool anyButtonPressed()
{
    return arduboy.anyPressed(LEFT_BUTTON | RIGHT_BUTTON | UP_BUTTON | DOWN_BUTTON | A_BUTTON | B_BUTTON);
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
    state = State::None;
}

void loop()
{
    State nextState = detectState();
    if (state != nextState)
    {
        // enter new state
        if (!anyButtonPressed())
        {
            state = nextState;
            gnw.clearInput();
        }
    }
    else
    {
        // stay in current state
        switch (state)
        {
            case State::None:
                arduboy.digitalWriteRGB(RGB_OFF, RGB_OFF, RGB_OFF); // black
                gnw.setInput(GameAndWatch::TIME, true);
                break;

            case State::Demo:
                arduboy.digitalWriteRGB(RGB_OFF, RGB_ON, RGB_OFF);  // green
                gnw.setInput(GameAndWatch::GAME_A, arduboy.pressed(A_BUTTON));
                gnw.setInput(GameAndWatch::GAME_B, arduboy.pressed(B_BUTTON));
                break;

            case State::GameA:
                arduboy.digitalWriteRGB(RGB_OFF, RGB_ON, RGB_ON);   // cyan
                gnw.setInput(GameAndWatch::LEFT,   arduboy.anyPressed(LEFT_BUTTON  | A_BUTTON));
                gnw.setInput(GameAndWatch::RIGHT,  arduboy.anyPressed(RIGHT_BUTTON | B_BUTTON));
                break;

            case State::GameB:
                arduboy.digitalWriteRGB(RGB_ON, RGB_OFF, RGB_ON);   // magenta
                gnw.setInput(GameAndWatch::LEFT,   arduboy.anyPressed(LEFT_BUTTON  | A_BUTTON));
                gnw.setInput(GameAndWatch::RIGHT,  arduboy.anyPressed(RIGHT_BUTTON | B_BUTTON));
                break;

            case State::Loss:
                arduboy.digitalWriteRGB(RGB_ON, RGB_OFF, RGB_OFF);  // red
                gnw.setInput(GameAndWatch::TIME, anyButtonPressed());
                break;
        }
    }

    if (state != State::None && gnw.nextFrame())
    {
        gnw.drawLCD();
        arduboy.display();
    }
    arduboy.idle();
}
