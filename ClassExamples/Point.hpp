//
// Created by 35988 on 10/31/2024.
//

#ifndef CLASSEXAMPLES_POINT_HPP
#define CLASSEXAMPLES_POINT_HPP
class Point{
private:
    double x;
    double y;
public:
    Point();
    Point(double x, double y);

    void printQuadrant() const;
    void print() const;

    double getX() const;
    double getY() const;
};
#endif //CLASSEXAMPLES_POINT_HPP
