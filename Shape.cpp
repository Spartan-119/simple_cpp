#include "Shape.h"
#include <iostream>

double Shape::getArea() const {
    return area;
}

void Shape::printInfo() const {
    std::cout << "This is a shape." << std::endl;
}