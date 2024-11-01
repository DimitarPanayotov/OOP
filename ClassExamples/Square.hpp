//
// Created by 35988 on 11/1/2024.
//

#ifndef CLASSEXAMPLES_SQUARE_HPP
#define CLASSEXAMPLES_SQUARE_HPP
#include "Point.hpp"
class Square {
private:
    Point point;
    double side;
public:
    Square();
    Square(double x, double y, double side);

    double area() const;
    void printAllPoints() const;
    void printQuadrant() const;
    void print() const;
};
#endif //CLASSEXAMPLES_SQUARE_HPP
