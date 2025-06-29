#include "pm_map.h"
#include <iostream>

namespace pm {
void Map::loadMap(const char* path) {
    std::cout << "Loading map: " << path << std::endl;
}

float Map::getValue(int x, int y) const {
    return static_cast<float>(x + y);
}
}