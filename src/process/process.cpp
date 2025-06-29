#include "process.h"
#include <iostream>
#include <Eigen/Dense>
using Eigen:: MatrixXd;
namespace process {
void Processor::setMap(const pm::Map& map) {
    MatrixXd m(2,2);
    m(0, 0) = 1;
    m(0, 1) = 2;
    m(1, 0) = 3;
    m(1, 1) = m(0,1)+m(1,0);
    std :: cout << m;
    map_ = map;
}

void Processor::execute() {
    std::cout << "Processing map..." << std::endl;
    float value = map_.getValue(10, 20);
    std::cout << "Value at (10,20): " << value << std::endl;
}
}