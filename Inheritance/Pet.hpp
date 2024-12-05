//
// Created by 35988 on 12/5/2024.
//

#ifndef WEEK9_INHERITANCE_PET_HPP
#define WEEK9_INHERITANCE_PET_HPP
#include "Animal.hpp"
class Pet : public Animal {
private:
    char* owner;
    unsigned phone;
public:
    Pet() : Animal(), owner(nullptr), phone(0) {}
    Pet(const char* _name, unsigned _age, const char* _owner, unsigned _phone) : Animal(_name,_age),
    owner(nullptr), phone(_phone) {
        copy(owner, _owner);
    }
    Pet(const Pet& other) : Animal(other), owner(nullptr), phone(other.phone){
        copy(owner, other.owner);
    }
    Pet& operator=(const Pet& other){
        if(this!=&other){
            Animal::operator=(other);
            copy(owner, other.owner);
            phone=other.phone;
        }
        return *this;
    }
    ~Pet(){
        Animal::~Animal();
        delete [] owner;
    }
    void changeOwner(const char* otherOwner, unsigned otherPhone) {
        copy(owner, otherOwner);
        phone=otherPhone;
    }
    void print() const{
        Animal::print();
        std::cout<<owner<<" "<<phone<<std::endl;
    }
};
#endif //WEEK9_INHERITANCE_PET_HPP
