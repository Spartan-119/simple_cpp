#ifndef INHERITANCEPRACTICE_RECTANGLE_H
#define INHERITANCEPRACTICE_RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w);
    double getArea() const override;
    void printInfo() const override;
};

#endif