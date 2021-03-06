#include "Game.h"
#include "Msg.h"

void Game::SetPlayerRoom(int room)
{
    m_playerRoom = room;
}

strvec Game::Input(string input)
{
    ints3 connected = m_map.GetConnectedRooms(m_playerRoom);
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
