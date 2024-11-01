//
// Created by 35988 on 11/1/2024.
//

#ifndef CLASSEXAMPLES_RECTANGLE_HPP
#define CLASSEXAMPLES_RECTANGLE_HPP
#include "Point.hpp"
class Rectangle {
private:
    Point point;
    double length;
    double width;
public:
    Rectangle();
    Rectangle(double x, double y, double length, double width);

    double area() const;
    void printAllPoints() const;
    void printQuadrant() const;
    void print() const;

};
#endif //CLASSEXAMPLES_RECTANGLE_HPP
