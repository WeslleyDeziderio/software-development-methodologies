#ifndef ELECTRICBIKE_HPP
#define ELECTRICBIKE_HPP

#include "Bike.hpp"
#include <iostream>

class ElectricBike : public Bike {
public:
    ElectricBike();
    ElectricBike(std::string id, double price);
    virtual ~ElectricBike();
};

#endif // ELECTRICBIKE_HPP