#include "Game.h"
#include "Msg.h"

void Game::SetPlayerRoom(int room)
{
    m_playerRoom = room;
}

strvec Game::Input(string input)
{
    return {
        Msg::HuntTheWumpus,
        "",
        Msg::YouAreInRoom + to_string(m_playerRoom),
        "TUNNELS LEAD TO 1 3 10"
    };
}
