#include <iostream>
#include "Overcoat.h"

int main() {
    Overcoat coat1("coat", 1500.0);
    Overcoat coat2("jacket", 1000.0);
    Overcoat coat3("coat", 2000.0);

    if (coat1 == coat3) {
        std::cout << "types coat1 and coat3 are the same" << std::endl;
    }
    else {
        std::cout << "Types coat1 and coat3 are different" << std::endl;
    }

    if (coat3 > coat1) {
        std::cout << "coat3 more expensive than coat1" << std::endl;
    }
    else {
        std::cout << "coat3 not more expensive than coat1" << std::endl;
    }

    coat2.print();

    return 0;
}
