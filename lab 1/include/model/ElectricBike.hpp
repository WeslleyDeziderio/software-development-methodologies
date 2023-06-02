#ifndef ELECTRICBIKE_HPP
#define ELECTRICBIKE_HPP

#include "Bike.hpp"
#include <iostream>

class ElectricBike : public Bike {
public:
    void Create();
    friend class Bike;
};

#endif // ELECTRICBIKE_HPP