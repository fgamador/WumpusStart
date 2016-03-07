#include "Game.h"
#include "Msg.h"

Game::Game()
{
    m_connected[2] = { 1, 3, 10 };
}

void Game::SetPlayerRoom(int room)
{
    m_playerRoom = room;
}

strvec Game::Input(string input)
{
    ints3 connected = m_connected[m_playerRoom];
    return {
        Msg::HuntTheWumpus,
        "",
        Msg::YouAreInRoom + to_string(m_playerRoom),
        Msg::TunnelsLeadTo
            + to_string(connected[0])
            + " " + to_string(connected[1])
            + " " + to_string(connected[2])
    };
}
