#include "../../include/model/ElectricBike.hpp"

ElectricBike::ElectricBike() {}

ElectricBike::ElectricBike(std::string id,  double price) {
    setBikePrice(price);
    setId(id);
}

ElectricBike::~ElectricBike() {}