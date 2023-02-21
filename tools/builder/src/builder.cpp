#include "builder_prepare.h"
#include "builder_compile.h"

const std::string games[]
{
    "gnw_ball",     // 1980 AC-01 Nintendo Game & Watch: Ball
    "gnw_chef",     // 1981 FP-24 Nintendo Game & Watch: Chef
    "gnw_fire",     // 1981 FR-27 Nintendo Game & Watch: Fire
    "gnw_flagman",  // 1980 FL-02 Nintendo Game & Watch: Flagman
    "gnw_helmet",   // 1981 CN-17 Nintendo Game & Watch: Helmet
    "gnw_judge",    // 1980 IP-05 Nintendo Game & Watch: Judge
    "gnw_lion",     // 1981 LN-08 Nintendo Game & Watch: Lion
    "gnw_manholeg", // 1981 MH-06 Nintendo Game & Watch: Manhole
    "gnw_mmouse",   // 1981 MC-25 Nintendo Game & Watch: Mickey Mouse
    "gnw_octopus",  // 1981 OC-22 Nintendo Game & Watch: Octopus
    "gnw_pchute",   // 1981 PR-21 Nintendo Game & Watch: Parachute
    "gnw_popeye",   // 1981 PP-23 Nintendo Game & Watch: Popeye
    "gnw_vermin",   // 1980 MT-03 Nintendo Game & Watch: Vermin
    "auslalom",     // 1991 IM-23 Elektronika: Autoslalom
    "rkosmosa",     // 1989 IM-13 Elektronika: Explorers of Space
};

int main(int argc, char* argv[])
{
    if (argc == 2)
    {
        std::string command = argv[1];
        if (command == "prepare-for-pixelart")
        {
            for (const auto& game : games)
            {
                GNW gnw(game);
                Prepare prepare(gnw);
                if (!prepare.PrepareForPixelArt()) return EXIT_FAILURE;
            }
            return EXIT_SUCCESS;
        }
        if (command == "compile-assets")
        {
            for (const auto& game : games)
            {
                GNW gnw(game);
                Compile compile(gnw);
                if (!compile.CompileAssets()) return EXIT_FAILURE;
            }
            return EXIT_SUCCESS;
        }
    }
    return EXIT_FAILURE;
}
