#include "Flat.h"
#include <iostream>

Flat::Flat() : area(0.0), price(0.0) {}

Flat::Flat(double area, double price) : area(area), price(price) {}

Flat::Flat(const Flat& other) : area(other.area), price(other.price) {}

Flat& Flat::operator=(const Flat& other) {
    if (this != &other) {
        area = other.area;
        price = other.price;
    }
    return *this;
}

bool Flat::operator==(const Flat& other) const {
    return area == other.area;
}

bool Flat::operator>(const Flat& other) const {
    return price > other.price;
}

Flat::~Flat() {}

void Flat::print() const {
    std::cout << "area: " << area << " sq.m, price: " << price << " UAH" << std::endl;
}
