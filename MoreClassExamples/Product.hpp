//
// Created by 35988 on 11/6/2024.
//

#ifndef WEEK5_MOREEXAMPLES_PRODUCT_HPP
#define WEEK5_MOREEXAMPLES_PRODUCT_HPP
class Product {
private:
    char* name;
    char* brand;
    double price;
    unsigned quantity;

    void copy(char*& dest, char* src);
public:
    Product();
    Product(char *name,  char* brand, double price, unsigned quantity);
    Product(const Product& other);
    Product& operator=(const Product& other);
    ~Product();

    void setName(char* name);
    void setBrand(char* brand);
    void setPrice(double price);
    void setQuantity(unsigned quantity);

    const char* getName() const;
    const char* getBrand() const;
    double getPrice() const;
    unsigned getQuantity() const;

    void swap(Product& other);

    void print() const;
};
#endif //WEEK5_MOREEXAMPLES_PRODUCT_HPP
