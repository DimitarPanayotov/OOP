//
// Created by 35988 on 12/5/2024.
//

#ifndef WEEK9_INHERITANCE_TASK2_PERSON_HPP
#define WEEK9_INHERITANCE_TASK2_PERSON_HPP
#include<iostream>
#include<cstring>
class Person {
private:
    char* name;
    unsigned age;
protected:
    void copy(char*& dest, const char* src){
        delete [] dest;
        if(!src) {
            dest = nullptr;
        }else{
            size_t size= strlen(src)+1;
            dest = new char[size];
            strcpy_s(dest, size, src);
        }
    }
public:
    Person() : name(nullptr), age(0) {}
    Person(const char* _name, unsigned _age) : name(nullptr), age(_age) {
        copy(name, _name);
    }
    Person(const Person& other) : Person(other.name, other.age) {}
    Person& operator=(const Person& other){
        if(this!=&other){
            copy(name, other.name);
            age=other.age;
        }
        return *this;
    }
    Person(Person&& other) noexcept{
        name=other.name;
        age=other.age;

        other.name=nullptr;
    }
    Person& operator=(Person&& other) noexcept{
        if(this!= &other){
            delete[] name;
            name=other.name;
            age=other.age;

            other.name=nullptr;
        }
        return *this;
    }
    ~Person(){
        delete[] name;
    }

    friend std::ostream& operator<<(std::ostream& out, const Person& person);
    friend bool operator==(const Person& lhs, const Person& rhs);
};
std::ostream& operator<<(std::ostream& out, const Person& person){
    out<<person.name<<" "<<person.age;
    return out;
}
bool operator==(const Person& lhs, const Person& rhs){
    return !strcmp(lhs.name, rhs.name);
}
#endif //WEEK9_INHERITANCE_TASK2_PERSON_HPP
