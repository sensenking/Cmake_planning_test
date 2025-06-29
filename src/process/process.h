#pragma once
#include "pm_map.h"  // 包含依赖头文件

namespace process {
class Processor {
public:
    void setMap(const pm::Map& map);
    void execute();
private:
    pm::Map map_;  // 定义成员变量
};
}