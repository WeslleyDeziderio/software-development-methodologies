#ifndef BIKE_HPP
#define BIKE_HPP

#include <iostream>
#include <string>
class Bike {
private:
    double price;
    std::string id;
public: 
    Bike();
    Bike(double price, std::string id);
    virtual ~Bike();
    void setBikePrice(double price);
    double getBikePrice();
    void setId(std::string id);
    std::string getId();
};

#endif // BIKE_HPP