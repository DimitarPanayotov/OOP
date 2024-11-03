#include "String.hpp"
#include <iostream>

class Person{
private:
    String name;
public:
    Person()=default;
   // Person(const String& name){
   //     this->name=name;
   //  }
    Person(String&& name){
        name=std::move(name);
    }
};
int main() {
    String dimitar("Dimitar");
    String gergana("Gergana");

    dimitar.append(gergana);
    dimitar.print();

    return 0;
}
