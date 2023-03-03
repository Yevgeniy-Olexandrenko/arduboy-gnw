#include "ArduboyGNW.h"
#include "gnw_ball.hpp"

Arduboy2Base arduboy;
ArduboyGNW gnw(arduboy);

enum State { None = 0x00, Demo, GameA, GameB, Loss };

State detectState()
{
    // bool time   = gnw.segmentVisible(int(gnw_octopus_segment::time  ));
    // bool game_a = gnw.segmentVisible(int(gnw_octopus_segment::game_a));
    // bool game_b = gnw.segmentVisible(int(gnw_octopus_segment::game_b));
    // bool death  = gnw.segmentVisible(int(gnw_octopus_segment::death ));
    // bool man1   = gnw.segmentVisible(int(gnw_octopus_segment::man1  ));
    // bool man2   = gnw.segmentVisible(int(gnw_octopus_segment::man2  ));
    // bool man3   = gnw.segmentVisible(int(gnw_octopus_segment::man3  ));

    // if (time && !game_a && !game_b) return State::Demo;
    // if (!time && death && !man1 && !man2 && !man3) return State::Loss;
    // if (!time && game_a) return State::GameA;
    // if (!time && game_b) return State::GameB;
    return State::None;
}

void setup()
{
    gnw.begin();
    gnw.powerOn(
        gnw_ball_controls,
        gnw_ball_segments,
        gnw_ball_graphics,
        gnw_ball_gfxtiles,
        gnw_ball_firmware
    );
}

void loop()
{
    gnw.updateState(State::Demo);

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
}
