#include "Point.hpp"
#include "Square.hpp"
#include "Rectangle.hpp"
#include "Circle.hpp"
#include <iostream>

int main() {
    Point point1;
    point1.print();

    Point point2(2,3);
    point2.print();

    Square square(3,4,2);
    square.print();

    Rectangle rectangle(1,2,5,3);
    rectangle.print();

    Circle circle(2,3,10);
    circle.print();

    return 0;
}
