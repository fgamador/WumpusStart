#include "Map.h"

Map::Map()
{
    m_connected[2] = { 1, 3, 10 };
}

ints3 Map::GetConnectedRooms(int room)
{
    return m_connected[room];
}
