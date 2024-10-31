//
// Created by 35988 on 10/17/2024.
//
#include "Employee.hpp"
#include<iostream>
#include <cstring>

Employee::Employee() {
    this->name = new char[50];
    this->age = 0;
    this->salary = 0;
    strcpy_s(this->name, 50, "nobody");
}

Employee::Employee(const char* name, unsigned age, double salary) {
    this->name= new char[strlen(name)+1];
    this->age=age;
    this->salary=salary;
    strcpy_s(this->name,strlen(name)+1,name);
}

Employee::Employee(const Employee& other) {
    this->name = new char[strlen(other.name) + 1];
    strcpy_s(this->name, strlen(other.name)+1, other.name);

    this->age=other.age;
    this->salary=other.salary;
}

Employee::~Employee() {
    delete [] name;
}

void Employee::setName(const char *name) {
    delete[] this->name;
    this->name = new char[strlen(name)+1];
    strcpy_s(this->name, strlen(name)+1, name);
}

const char *Employee::getName() const {
    return name;
}

void Employee::setAge(unsigned int age) {
    this->age=age;
}

unsigned int Employee::getAge() const {
    return age;
}

void Employee::setSalary(unsigned int salary) {
    this->salary=salary;
}

double Employee::getSalary() const {
    return salary;
}

void Employee::printInfo() const {
    std::cout<<name<<" "<<age<<" "<<salary<<" "<<std::endl;
}
