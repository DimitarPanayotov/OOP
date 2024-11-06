#include "Product.hpp"
#include "Store.hpp"
#include <iostream>
#include<cstring>

int main() {
    Store fantastiko_mladost(200);
    Store avanti_fmi(100);

    Product kufte("kufte", "PIGS", 1.99, 1);
    fantastiko_mladost.addProduct(kufte);

    avanti_fmi.addProduct(kufte);
    avanti_fmi.addProduct("kebapche","BEEF", 2.49, 3);

    Store avanti_center(avanti_fmi);
    avanti_center.addProduct("kebapche", "NOTBEEF", 2.29,5);

    std::cout<<"Fantastiko Mladost: ";
    fantastiko_mladost.printAvailableProducts();
    std::cout<<std::endl;

    std::cout<<"Avanti FMI: ";
    avanti_fmi.printAvailableProducts();
    std::cout<<std::endl;

    std::cout<<"Avanti Center: ";
    avanti_center.printAvailableProducts();
    std::cout<<std::endl;

    return 0;
}
