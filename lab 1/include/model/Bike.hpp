#ifndef BIKE_HPP
#define BIKE_HPP

#include <iostream>
#include <string>

class Bike{
private:
    std::string type;
    double price;

public: 
    Bike();
    ~Bike();
    Bike(std::string& type, double price);
    void setBikeType(std::string& type);
    void setBikePrice(double price);
    std:: string getBikeType();
    double getBikePrice();

};

#endif // BIKE_HPP