#ifndef URBANBIKE_HPP
#define URBANBIKE_HPP

#include "Bike.hpp"
#include <iostream>

class UrbanBike : public Bike {
public:
    UrbanBike();
    UrbanBike(std::string type, double price);
    virtual ~UrbanBike();
};

#endif // URBANbIKE_CPP