#ifndef INHERITANCEPRACTICE_TRIANGLE_H
#define INHERITANCEPRACTICE_TRIANGLE_H

#include "Shape.h"

class Triangle : public Shape {
private:
    double base, height;

public:
    Triangle(double b, double h);
    double getArea() const override;
    void printInfo() const override;
};

#endif