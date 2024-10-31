//
// Created by 35988 on 10/17/2024.
//

#ifndef WEEK2_CONSTRUCTORS_EMPLOYEE_HPP
#define WEEK2_CONSTRUCTORS_EMPLOYEE_HPP
#include<iostream>
#include<cstring>

class Employee {
private:
    char* name;
    unsigned  age;
    double salary;
public:
    Employee();
    Employee(const char* name, unsigned age, double salary);
    Employee(const Employee& other);
    ~Employee();

    void setName(const char* name);
    void setAge(unsigned age);
    void setSalary(unsigned salary);

    const char* getName() const;
    unsigned getAge() const;
    double getSalary() const;

    void printInfo() const;


};
#endif //WEEK2_CONSTRUCTORS_EMPLOYEE_HPP
