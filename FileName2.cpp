#include <iostream>
#include "Flat.h"
using namespace std;

int main() {
    Flat flat1(50.0, 1000000.0);
    Flat flat2(75.0, 1500000.0);
    Flat flat3(50.0, 1200000.0);

    if (flat1 == flat3) {
        cout << "flat1 and flat3 have the same area" << endl;
    }
    else {
        cout << "flat1 and flat3 have different area" << endl;
    }

    if (flat2 > flat1) {
        cout << "flat2 more expensive than flat1." << endl;
    }
    else {
        cout << "flat2 not more expensive than flat1." << endl;
    }

    flat1 = flat2;
    flat1.print();
}
