#ifndef FLAT_H
#define FLAT_H

class Flat {
    double area;
    double price;

public:
    Flat();
    Flat(double area, double price);
    Flat(const Flat& other);
    Flat& operator=(const Flat& other);
    bool operator==(const Flat& other) const;
    bool operator>(const Flat& other) const;
    ~Flat();

    void print() const;
};

#endif
