//
// Created by 35988 on 11/1/2024.
//

#ifndef CLASSEXAMPLES_CIRCLE_HPP
#define CLASSEXAMPLES_CIRCLE_HPP
#include "Point.hpp"
class Circle{
private:
    Point point; //center
    double radius;
public:
    Circle();
    Circle(double x, double y, double radius);

    double area() const;
    void printQuadrant() const;
    void print() const;
};
#endif //CLASSEXAMPLES_CIRCLE_HPP
