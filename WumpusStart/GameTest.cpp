#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Game.h"

TEST_CASE("Game")
{
    Game game;
    strvec output = game.Input("");
    REQUIRE(output == strvec({ "HUNT THE WUMPUS" }));
}
