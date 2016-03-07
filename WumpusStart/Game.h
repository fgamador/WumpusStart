#pragma once

#include "stdtypes.h"

class Game
{
public:
    void SetPlayerRoom(int room);
    strvec Input(string input);

private:
    int m_playerRoom;
};
