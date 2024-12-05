#include "Company.hpp"
#include <iostream>

int main() {
    Company MitkoFirm;
    MitkoFirm.add_employee("Mitko", 20, 10000);
    MitkoFirm.add_employee("Gergana", 20, 100);
    MitkoFirm.add_employee("Oliver", 65, 1500);

    MitkoFirm.print_all();

    std::cout<<std::boolalpha<<MitkoFirm.has_employee("Mitko")<<" "<<MitkoFirm.has_employee("Pancho")<<std::endl;
    MitkoFirm.print_employee("Mitko");
    MitkoFirm.print_employee("Jorkata");
    return 0;
}
