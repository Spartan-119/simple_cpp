#ifndef INHERITANCEPRACTICE_CIRCLE_H
#define INHERITANCEPRACTICE_CIRCLE_H

#include "Shape.h"

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r);
    double getArea() const override;
    void printInfo() const override;
};

#endif