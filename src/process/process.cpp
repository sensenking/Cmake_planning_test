#include "process.h"
#include <iostream>

namespace process {
void Processor::setMap(const pm::Map& map) {
    map_ = map;
}

void Processor::execute() {
    std::cout << "Processing map..." << std::endl;
    float value = map_.getValue(10, 20);
    std::cout << "Value at (10,20): " << value << std::endl;
}
}