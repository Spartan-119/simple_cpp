#include "Circle.h"
#include <iostream>

Circle::Circle(double r) : radius(r) {
    area = 3.14159 * radius * radius;
}

double Circle::getArea() const {
    return area;
}

void Circle::printInfo() const {
    std::cout << "This is a circle with radius " << radius << "." << std::endl;
}