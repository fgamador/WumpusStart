#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "Game.h"
#include "Msg.h"

TEST_CASE("Game")
{
    Game game;
    game.SetPlayerRoom(2);
    strvec output = game.Input("");
    REQUIRE(output == strvec({
        Msg::HuntTheWumpus,
        "",
        Msg::YouAreInRoom + "2",
        Msg::TunnelsLeadTo + "1 3 10"
    }));
}
