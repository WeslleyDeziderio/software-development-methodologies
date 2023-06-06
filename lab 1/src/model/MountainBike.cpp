#include "../../include/model/MountainBike.hpp"

MountainBike::MountainBike() {}

MountainBike::MountainBike(std::string type, double price) {
    setBikeType(type);
    setBikePrice(price);
}

MountainBike::~MountainBike() {};
