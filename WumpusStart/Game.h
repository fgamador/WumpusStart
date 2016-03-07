#pragma once

#include "Map.h"
#include "stdtypes.h"

class Game
{
public:
    Game();
    void SetPlayerRoom(int room);
    strvec Input(string input);

private:
    ints3 GetConnectedRooms(int room);

private:
    Map m_map;
    array<ints3, 21> m_connected;
    int m_playerRoom;
};
