#ifndef MOUNTAINBIKE_HPP
#define MOUNTAINBIKE_HPP

#include "Bike.hpp"
#include <iostream>

class MountainBike : public Bike {
public:
    void Create();
    friend class Bike;
};

#endif // MOUNTAINBIKE_CPP