#include "GNWEngine.h"
#include "gnw_octopus.hpp"

Arduboy2 arduboy;
GNWEngine gnw(arduboy);
//Sprites sprites;

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

    // TODO

    // here we set the frame rate to 15, we do not need to run at
    // default 60 and it saves us battery life
    arduboy.setFrameRate(15);
    arduboy.invert(true);
}

void loop()
{
    if (arduboy.nextFrame())
    {
        arduboy.clear();
        gnw.drawLCD();
        arduboy.display();
    }
}
