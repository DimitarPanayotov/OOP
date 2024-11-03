//
// Created by 35988 on 11/1/2024.
//

#ifndef WEEK4_MOVESEMANTICS_STRING_HPP
#define WEEK4_MOVESEMANTICS_STRING_HPP
class String {
private:
    char* data;
    unsigned size;
    unsigned capacity;
private:
    void resize(unsigned size);
    void copy(const String& other);
    void free();
public:
    String(); //constructor without params
    String(const char* str); // String job("Plubmer") //constructor with params
    String(const String& other); //copy constructor
    String& operator=(const String& other); //operator =

    String(String&& other); //move semantics
    String& operator=(String&& other); //move semantics

    ~String(); //destructor

    void print() const;

    String& append(const String& other);
};
#endif //WEEK4_MOVESEMANTICS_STRING_HPP
