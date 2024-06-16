#include <iostream>
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"

int main() {
    Rectangle rect(5.0, 3.0);
    Circle circ(2.5);
    Triangle tri(4.0, 6.0);

    Shape* shapes[] = {&rect, &circ, &tri};

    for (Shape* shape : shapes) {
        shape->printInfo();
        std::cout << "Area: " << shape->getArea() << std::endl;
        std::cout << std::endl;
    }

    return 0;
}