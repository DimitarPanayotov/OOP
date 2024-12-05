//
// Created by 35988 on 12/5/2024.
//

#ifndef WEEK9_INHERITANCE_ANIMAL_HPP
#define WEEK9_INHERITANCE_ANIMAL_HPP
#include<iostream>
#include<cstring>

class Animal {
private:
    char* name;
    unsigned age;
protected:
    void copy(char*& dest, const char* src){
        delete[] dest;
        if(!src){
            dest=nullptr;
        }else{
            size_t size = strlen(src)+1;
            dest = new char[size];
            strcpy_s(dest,size, src);
        }
    }
public:
    Animal() : name(nullptr), age(0) {}
    Animal(const char* _name, unsigned _age) : name(nullptr){
        copy(name, _name);
        age=_age;
    }
    Animal(const Animal& other) : Animal(other.name, other.age){}
    Animal& operator=(const Animal& other){
        if(this!=&other){
            copy(name,other.name);
            age=other.age;
        }
        return *this;
    }
    ~Animal() {
        delete [] name;
    }
    void changeName(const char* otherName){
        copy(name, otherName);
    }
    void print() const{
        if(name){
            std::cout<<name<<" "<<age<<std::endl;
        }
    }
};
#endif //WEEK9_INHERITANCE_ANIMAL_HPP
