#include "../../include/model/ElectricBike.hpp"

ElectricBike::ElectricBike() {}

ElectricBike::ElectricBike(std::string type, double price) {
    setBikeType(type);
    setBikePrice(price);
}

ElectricBike::~ElectricBike() {}