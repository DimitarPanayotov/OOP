//
// Created by 35988 on 11/6/2024.
//
#include "Product.hpp"
#include "Store.hpp"
#include<iostream>
#include<cstring>

Store::Store(size_t capacity) {
    this->capacity=capacity;
    size=0;
    products = new Product * [capacity];
}


Store::Store(const Store &other) {
    copy(other);
}

Store &Store::operator=(const Store &other) {
    if(this!=&other){
        free();
        copy(other);
    }
    return *this;
}

Store::~Store() {
    free();
}

bool Store::addProduct(const Product &product_to_add) {
    if(size>=capacity){
        return false;
    }
    products[size++]= new Product(product_to_add); // copy constructor from Product
    return true;
}

bool Store::addProduct( char *name,  char *brand, double price, unsigned int quantity) {
    if(size>=capacity){
        return false;
    }
    products[size++]= new Product(name, brand, price, quantity); // Parameter constructor from Product
    return true;
}

int Store::find(const char *name, const char *brand) const {
    for(size_t i=0;i<size;i++){
        if(!(strcmp(name, products[i]->getName())) && !(strcmp(brand, products[i]->getBrand()))){
            return i;
        }
    }
    return -1;
}

bool Store::changeQuantity(const char *name, const char *brand, unsigned int new_quantity) {
    int index = find(name, brand);
    if(index<0){
        return false;
    }
    products[index]->setQuantity(new_quantity);
    return true;
}

bool Store::buy(const char *name, const char *brand) {
    int index=find(name, brand);
    if(index<0){
        return false;
    }

    std::cout<<"You bought ";
    products[index]->print();

    unsigned newQuantity = products[index]->getQuantity();
    newQuantity--;
    if(newQuantity<=0){
        removeProduct(index);
    }else{
        products[index]->setQuantity(newQuantity);
    }
    return true;
}

void Store::printAvailableProducts() const {
    std::cout<<"Available products: "<<std::endl;
    for(size_t i=0;i<size;i++){
        products[i]->print();
    }
}

void Store::printProductsByBrand(const char *brand) const {
    for (size_t i=0;i<size; ++i) {
        if(!(strcmp(products[i]->getBrand(),brand))){
            products[i]->print();
        }
    }
}

void Store::copy(const Store &other) {
    size=0;
    capacity=other.capacity;
    products = new Product* [capacity];
    for(size_t i=0;i<other.size;i++){
        addProduct(*other.products[i]);
    }
}

void Store::free() {
    for(size_t i=0;i<size;i++){
        delete products[i];
    }
    delete[] products;
}

bool Store::removeProduct(size_t i) {
    if(i>size){
        return false;
    }

    //products[i]->swap(products[size]);
    std::swap(products[i],products[size]);
    delete products[size];
    size--;
    return true;
}