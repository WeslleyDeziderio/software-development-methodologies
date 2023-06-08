#include "../../../include/factories/Bikes/ElectricBikeModelFactory.hpp"


ElectricBikeModelFactory::ElectricBikeModelFactory() {}

ElectricBikeModelFactory::~ElectricBikeModelFactory() {}

Bike* ElectricBikeModelFactory::createBike(std::unordered_map<std::string, double>a) {
    Bike* bike = nullptr;
    bike = new ElectricBike("type", 0.00);

    return bike;
}
