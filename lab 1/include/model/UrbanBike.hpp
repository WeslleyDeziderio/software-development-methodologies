#ifndef URBANBIKE_HPP
#define URBANBIKE_HPP

#include "Bike.hpp"
#include <iostream>

class UrbanBike : public Bike {
public:
    void Rent();
    friend class Bike;
};

#endif // URBANbIKE_CPP