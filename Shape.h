#ifndef INHERITANCEPRACTICE_SHAPE_H
#define INHERITANCEPRACTICE_SHAPE_H

class Shape {
protected:
    double area;

public:
    Shape() : area(0.0) {}

    virtual double getArea() const;
    virtual void printInfo() const;
};

#endif