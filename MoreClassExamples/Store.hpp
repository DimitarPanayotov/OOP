//
// Created by 35988 on 11/6/2024.
//

#ifndef WEEK5_MOREEXAMPLES_STORE_HPP
#define WEEK5_MOREEXAMPLES_STORE_HPP
#include "Product.hpp"
#include<iostream>
#include<cstring>

class Store{
private:
    Product** products;
    size_t size;
    size_t capacity;

    void copy(const Store& other);
    void free();
    int find(const char* name, const char* brand) const;
    bool removeProduct(size_t i);
public:
    Store(size_t capacity); //cant resize the store
    Store(const Store& other);
    Store& operator=(const Store& other);
    ~Store();

    bool addProduct(const Product& product_to_add);
    bool addProduct( char* name,  char* brand, double price, unsigned quantity);
    bool changeQuantity(const char* name, const char* brand, unsigned new_quantity);
    bool buy(const char* name, const char* brand);

    void printAvailableProducts() const;
    void printProductsByBrand(const char* brand) const;
};
#endif //WEEK5_MOREEXAMPLES_STORE_HPP
