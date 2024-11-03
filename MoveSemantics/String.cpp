//
// Created by 35988 on 11/1/2024.
//
#include "String.hpp"
#include<iostream>
#include<cstring>

String::String() {
    data=nullptr;
    size=0;
    capacity=0;

    std::cout<<"Default constructor"<<std::endl;
}

String::String(const char *str) {
    capacity= strlen(str)+1;
    data = new char[capacity];
    strcpy_s(data, capacity, str);
    size=capacity;

    std::cout<<"Constructor with parameters"<<std::endl;
}

String::String(const String &other) {
    copy(other);
    std::cout<<"Copy constructor"<<std::endl;
}

String& String::operator=(const String& other) {
    if(this!=&other){
        delete[] data;
        copy(other);
    }

    return *this;

    std::cout<<"Assignement operator"<<std::endl;
}

String::String(String&& other) {
    capacity=other.capacity;
    size=other.size;
    data=other.data;

    other.data=nullptr;
    other.size=0;
    other.capacity=0;

    std::cout<<"Move copy constructor"<<std::endl;
}

String& String::operator=(String &&other) {
    if(this!=&other){
        capacity=other.capacity;
        size=other.size;

        delete [] data;
        data=other.data;

        other.data= nullptr;
        other.size=0;
        other.capacity=0;
    }
    return *this;
    std::cout<<"Move operator="<<std::endl;
}

String::~String(){
    free();
    std::cout<<"Destructor"<<std::endl;
}

void String::print() const {
    if(!data){
        return;
    }
    std::cout<<data<<std::endl;
}

String& String::append(const String& other) {
    //"I am" + "Dimitar"
    if(capacity<(size-1)+other.size){
        resize(other.size);
    }

    strcpy_s((data+size-1),other.size,other.data);

    return *this;
}

void String::resize(unsigned int extra_size) {
    char* new_data = new char[capacity+extra_size];
    strcpy_s(new_data, capacity, data);

    delete[] data;
    data=new_data;

    capacity+=extra_size;

    std::cout<<"Resize"<<std::endl;
}

void String::copy(const String& other) {
    capacity=other.capacity;
    data= new char[capacity];
    strcpy_s(data,capacity,other.data);
    size=other.size;
}

void String::free() {
    delete[] data;
    size=0;
    capacity=0;
}