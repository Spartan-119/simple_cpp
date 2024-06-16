cmake_minimum_required(VERSION 3.28)
project(InheritancePractice)

set(CMAKE_CXX_STANDARD 17)

add_executable(InheritancePractice main.cpp
        Rectangle.h
        Shape.h
        Shape.cpp
        Rectangle.cpp
        Circle.h
        Circle.cpp
        Triangle.h
        Triangle.cpp)
