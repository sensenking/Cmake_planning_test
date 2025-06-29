#include "process.h"  // 包含主头文件

int main() {
    pm::Map map;
    map.loadMap("data.bin");

    process::Processor processor;
    processor.setMap(map);
    processor.execute();

    return 0;
}