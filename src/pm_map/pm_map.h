#pragma once

namespace pm {
class Map {
public:
    void loadMap(const char* path);
    float getValue(int x, int y) const;
};
}