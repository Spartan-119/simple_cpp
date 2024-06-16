#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(double l, double w) : length(l), width(w) {
    area = length * width;
}

double Rectangle::getArea() const {
    return area;
}

void Rectangle::printInfo() const {
    std::cout << "This is a rectangle with length " << length << " and width " << width << "." << std::endl;
}