//
// Created by 35988 on 11/19/2024.
//

#ifndef WEEK6_STREAMSANDFILES_ANIMAL_HPP
#define WEEK6_STREAMSANDFILES_ANIMAL_HPP

#include<fstream>

class Animal {
private:
    char* name;
    char* breed;
    unsigned short age;
    char* owner;
private:
    void copy(char*&, size_t, const char*);
    void copy(const Animal&);
    void free();
    void serialize_str(std::ofstream&, const char*) const;
    void deserialize_str(std::ifstream&, char*&);
    void input_str(std::ifstream&, char*&);
public:
    Animal();
    Animal(const char* , const char* , unsigned short , const char* );
    Animal(const Animal& );
    Animal& operator=(const Animal&);
    ~Animal();

    void serialize(std::ofstream&) const;  //Записване в бинарен файл
    void deserialize(std::ifstream&);      //Четене от бинарен файл

    void input(std::ofstream&) const;
    void output(std::ifstream&);

    void write_to_file(const char*) const;
    void read_from_file(const char*);

    void print() const;
};
#endif //WEEK6_STREAMSANDFILES_ANIMAL_HPP
