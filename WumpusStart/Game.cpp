#include "Game.h"
#include "Msg.h"

void Game::SetPlayerRoom(int room)
{
}

strvec Game::Input(string input)
{
    return { Msg::HuntTheWumpus, "", "YOU ARE IN ROOM 2" };
}
