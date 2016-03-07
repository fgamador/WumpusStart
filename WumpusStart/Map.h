#pragma once

#include "stdtypes.h"

class Map
{
public:
    Map();
    ints3 GetConnectedRooms(int room);

private:
    array<ints3, 21> m_connected;
};
