#ifndef MOUNTAINBIKE_HPP
#define MOUNTAINBIKE_HPP

#include "Bike.hpp"
#include <iostream>

class MountainBike : public Bike {
public:
    MountainBike();
    MountainBike(std::string id, double price);
    virtual ~MountainBike();
};

#endif // MOUNTAINBIKE_CPP