#ifndef MOUNTAINBIKE_HPP
#define MOUNTAINBIKE_HPP

#include "Bike.hpp"
#include <iostream>

class MountainBike {
    void Rent();
    friend class Bike;
};

#endif // MOUNTAINBIKE_CPP