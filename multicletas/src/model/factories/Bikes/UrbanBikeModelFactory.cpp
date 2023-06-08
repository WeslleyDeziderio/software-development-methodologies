#include "../../../../include/model/factories/Bikes/UrbanBikeModelFactory.hpp"


UrbanBikeModelFactory::UrbanBikeModelFactory() {}

UrbanBikeModelFactory::~UrbanBikeModelFactory() {}

Bike* UrbanBikeModelFactory::createBike(std::unordered_map<std::string, double>a) {
    Bike* bike = nullptr;
    bike = new UrbanBike("type", 0.00);

    return bike;
}
