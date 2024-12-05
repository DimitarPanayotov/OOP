#include "Animal.hpp"
#include "Pet.hpp"
#include <iostream>
#include<cstring>
int main() {
    Pet dog("Sharo", 2, "Dimitar", 89312345);
    dog.print();
    dog.changeName("Reksi");
    dog.print();

    return 0;
}
