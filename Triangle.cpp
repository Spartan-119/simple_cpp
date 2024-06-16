#include "Triangle.h"
#include <iostream>

Triangle::Triangle(double b, double h) : base(b), height(h) {
    area = 0.5 * base * height;
}

double Triangle::getArea() const {
    return area;
}

void Triangle::printInfo() const {
    std::cout << "This is a triangle with base " << base << " and height " << height << "." << std::endl;
}