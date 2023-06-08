#include "../../include/model/UrbanBike.hpp"

UrbanBike::UrbanBike() {};

UrbanBike::UrbanBike(std::string id, double price) {
    setId(id);
    setBikePrice(price);
}

UrbanBike::~UrbanBike() {}
