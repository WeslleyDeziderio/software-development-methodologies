#include "../../include/model/MountainBike.hpp"

MountainBike::MountainBike() {}

MountainBike::MountainBike(std::string id, double price) {
    setId(id);
    setBikePrice(price);
}

MountainBike::~MountainBike() {};
