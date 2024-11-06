//
// Created by 35988 on 11/6/2024.
//
#include "Product.hpp"
#include<iostream>
#include<cstring>

void Product::copy(char *&dest, char *src) {
    delete[] dest;
    dest = new char[strlen(src)+1];
    strcpy(dest,src);
}

void Product::swap(Product &other) {
    using std::swap;
    swap(name, other.name);
    swap(brand, other.brand);
    swap(price, other.price);
    swap(quantity, other.quantity);
}
Product::Product() {
    name=nullptr;
    brand=nullptr;
    price=0;
    quantity=0;
}

Product::Product(char* name, char* brand, double price, unsigned int quantity) {
    //this->name=nullptr;
    this->brand=nullptr;
    this->price=price;
    this->quantity=quantity;

    copy(this->name, name);
    copy(this->brand, brand);
}

Product::Product(const Product &other) {
    copy(this->name, other.name);
    copy(this->brand, other.brand);
    price=other.price;
    quantity=other.quantity;
}

Product& Product::operator=(const Product &other) {
    Product other_copy(other);
    swap(other_copy);
    return *this;
}

Product::~Product() {
    delete[] name;
    delete[] brand;
}

void Product::setName( char *name) {
    copy(this->name, name);
}

void Product::setBrand(char *brand) {
    copy(this->brand, brand);
}

void Product::setPrice(double price) {
    this->price=price;
}

void Product::setQuantity(unsigned quantity) {
    this->quantity=quantity;
}

const char *Product::getName() const {
    return name;
}

const char *Product::getBrand() const {
    return brand;
}

double Product::getPrice() const {
    return price;
}

unsigned int Product::getQuantity() const {
    return quantity;
}

void Product::print() const {
    std::cout<<name<<" by "<<brand<<" that costs "<<price<<" and we have "<<quantity<<" of them."<<std::endl;

}