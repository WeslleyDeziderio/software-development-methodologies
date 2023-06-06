#ifndef BIKE_HPP
#define BIKE_HPP

#include <iostream>
#include <string>
class Bike {
private:
    std::string type;
    double price;
public: 
    Bike();
    Bike(std::string type, double price);
    virtual ~Bike();
    void setBikeType(std::string type);
    std:: string getBikeType();
    void setBikePrice(double price);
    double getBikePrice();
};

#endif // BIKE_HPP