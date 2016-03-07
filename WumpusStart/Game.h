#pragma once

#include "stdtypes.h"

class Game
{
public:
    Game();
    void SetPlayerRoom(int room);
    strvec Input(string input);

private:
    array<ints3, 21> m_connected;
    int m_playerRoom;
};
