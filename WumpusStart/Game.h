#pragma once

#include "Map.h"

class Game
{
public:
    void SetPlayerRoom(int room);
    strvec Input(string input);

private:
    Map m_map;
    int m_playerRoom;
};
