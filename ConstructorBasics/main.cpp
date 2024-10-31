//
// Created by 35988 on 10/31/2024.
//
#include "Employee.hpp"
#include<iostream>

int main () {
    Employee george("George", 25, 2000);
    george.printInfo();

    Employee peter(george);
    peter.printInfo();

    return 0;
}