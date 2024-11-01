//
// Created by 35988 on 11/1/2024.
//
#include "Square.hpp"
#include<iostream>
Square::Square() {
    this->point=Point();
    this->side=0;
}
Square::Square(double x, double y, double side) {
    this->point=Point(x,y);
    this->side=side;
}
double Square::area() const {
    return side * side;
}

void Square::printAllPoints() const {
    std::cout<<"Upper left corner: ";
    point.print();

    std::cout<<"Lower left corner: ";
    Point(point.getX()-side, point.getY()).print(); //Creates new point and prints

    std::cout<<"Upper right corner: ";
    Point(point.getX(), point.getY()+side).print();

    std::cout<<"Lower right corner: ";
    std::cout<<"x:"<<point.getX()-side<<" y:"<<point.getY()+side<<std::endl; // Just couts the results
}

void Square::printQuadrant() const {
    point.printQuadrant();
}

void Square::print() const {
    std::cout << "-----------------" << std::endl;
    std::cout << "Square" << std::endl;
    std::cout << "Starting point: ";
    point.print();
    std::cout << "Quadrant: ";
    printQuadrant();
    std::cout << "Area: " << area() << std::endl;
    std::cout << "Vertices: " << std::endl;
    printAllPoints();
    std::cout << "-----------------" << std::endl;
}