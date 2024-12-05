//
// Created by 35988 on 12/5/2024.
//

#ifndef WEEK9_INHERITANCE_TASK2_EMPLOYEE_HPP
#define WEEK9_INHERITANCE_TASK2_EMPLOYEE_HPP
#include "Person.hpp"
#include<iostream>
#include<cstring>
class Employee : public Person {
private:
    double salary;
public:
    Employee() : Person() , salary() {}
    Employee(const char* _name, unsigned _age, double _salary) :
    Person(_name, _age), salary(_salary) {}
    friend std::ostream& operator<<(std::ostream& out, const Employee& employee) ;
};
std::ostream& operator<<(std::ostream& out, const Employee& employee){
    out<<Person(employee)<<" "<<employee.salary<<std::endl;
    return out;
}

#endif //WEEK9_INHERITANCE_TASK2_EMPLOYEE_HPP
