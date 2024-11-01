//
// Created by 35988 on 10/31/2024.
//
#include "Point.hpp"
#include<iostream>

Point::Point() {
    x=0;
    y=0;
}

Point::Point(double x, double y) {
    this->x=x;
    this->y=y;
}

double Point::getX() const {
    return this->x;
}

double Point::getY() const {
    return this->y;
}

void Point::printQuadrant() const {
    if(this->x>0 && this->y>0){
        std::cout<<"1-st quadrant"<<std::endl;
        return;
    }
    if(this->x<0 && this->y>0){
        std::cout<<"2-nd quadrant"<<std::endl;
        return;
    }
    if(this->x<0 && this->y<0){
        std::cout<<"3-rd quadrant"<<std::endl;
        return;
    }
    if(this->x>0 && this->y<0){
        std::cout<<"4-th quadrant"<<std::endl;
        return;
    }
    std::cout<<"Point is (0,0)"<<std::endl;
}

void Point::print() const {
    std::cout<<"x:"<<x<<" y:"<<y<<std::endl;
}