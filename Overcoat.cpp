#include "Overcoat.h"
#include <iostream>
#include <cstring>

Overcoat::Overcoat() : type(nullptr), price(0.0) {}

Overcoat::Overcoat(const char* type, double price) : price(price) {
    this->type = new char[std::strlen(type) + 1];
    std::strcpy(this->type, type);
}

Overcoat::Overcoat(const Overcoat& other) {
    type = new char[std::strlen(other.type) + 1];
    std::strcpy(type, other.type);
    price = other.price;
}

Overcoat& Overcoat::operator=(const Overcoat& other) {
    if (this != &other) {
        delete[] type;
        type = new char[std::strlen(other.type) + 1];
        std::strcpy(type, other.type);
        price = other.price;
    }
    return *this;
}

bool Overcoat::operator==(const Overcoat& other) const {
    return std::strcmp(type, other.type) == 0;
}

bool Overcoat::operator>(const Overcoat& other) const {
    if (std::strcmp(type, other.type) == 0) {
        return price > other.price;
    }
    return false;
}

Overcoat::~Overcoat() {
    delete[] type;
}

void Overcoat::print() const {
    std::cout << "type: " << (type ? type : "???") << ", price: " << price << std::endl;
}
