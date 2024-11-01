//
// Created by 35988 on 11/1/2024.
//
#include "Circle.hpp"
#include<iostream>

Circle::Circle() {
    this->point=Point();
    this->radius=0;
}
Circle::Circle(double x, double y, double radius) {
    this->point=Point(x, y);
    this->radius=radius;
}

double Circle::area() const {
    return 3.14*radius*radius;
}

void Circle::printQuadrant() const {
    point.printQuadrant();
}

void Circle::print() const {
    std::cout << "-----------------" << std::endl;
    std::cout << "Circle" << std::endl;
    std::cout << "Center: ";
    point.print();
    std::cout << "Quadrant: ";
    printQuadrant();
    std::cout << "Radius: " << radius << std::endl;
    std::cout << "Area: " << area() << std::endl;
    std::cout << "-----------------" << std::endl;
}