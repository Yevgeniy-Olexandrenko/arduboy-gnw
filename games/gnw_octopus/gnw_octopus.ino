#include "GNWEngine.h"
#include "gnw_octopus.h"

Arduboy2Base arduboy;
GNWEngine gnw(arduboy);

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
}

void loop()
{
    // TODO
}