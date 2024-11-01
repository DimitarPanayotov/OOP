//
// Created by 35988 on 11/1/2024.
//
#include "Rectangle.hpp"
#include <iostream>

Rectangle::Rectangle() {
    this->point=Point();
    this->length=0;
    this->width=0;
}

Rectangle::Rectangle(double x, double y, double length, double width) {
    this->point=Point(x,y);
    this->length=length;
    this->width=width;
}

double Rectangle::area() const {
    return length * width;
}

void Rectangle::printAllPoints() const {
    std::cout << "Upper left corner: ";
    point.print();

    std::cout << "Lower left corner: ";
    Point(point.getX() - length, point.getY()).print();

    std::cout << "Upper right corner: ";
    std::cout <<"x:"<< point.getX() << " y:" << point.getY() + width << std::endl;

    std::cout << "Lower right corner: ";
    std::cout <<"x:"<< point.getX() - length << " y:" << point.getY() + width << std::endl;
}

void Rectangle::printQuadrant() const {
    point.printQuadrant();
}

void Rectangle::print() const {
    std::cout << "-----------------" << std::endl;
    std::cout << "Rectangle" << std::endl;
    std::cout << "Starting point: ";
    point.print();
    std::cout << "Quadrant: ";
    printQuadrant();
    std::cout << "Area: " << area() << std::endl;
    std::cout << "Vertices: " << std::endl;
    printAllPoints();
    std::cout << "-----------------" << std::endl;
}
