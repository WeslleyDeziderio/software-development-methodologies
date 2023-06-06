#include "../../include/model/UrbanBike.hpp"

UrbanBike::UrbanBike() {};

UrbanBike::UrbanBike(std::string type, double price) {
    setBikeType(type);
    setBikePrice(price);
}

UrbanBike::~UrbanBike() {}
