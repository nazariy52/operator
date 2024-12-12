#ifndef OVERCOAT_H
#define OVERCOAT_H

class Overcoat {
    char* type;       
    double price;    
public:
    Overcoat();                               
    Overcoat(const char* type, double price);
    Overcoat(const Overcoat& other);  
    Overcoat& operator=(const Overcoat& other); 
    bool operator==(const Overcoat& other) const; 
    bool operator>(const Overcoat& other) const; 
    ~Overcoat();    

    void print() const;    
};

#endif
