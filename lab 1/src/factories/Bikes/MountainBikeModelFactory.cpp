#include "../../../include/factories/Bikes/MountainBikeModelFactory.hpp"


MountainBikeModelFactory::MountainBikeModelFactory() {}

MountainBikeModelFactory::~MountainBikeModelFactory() {}

Bike* MountainBikeModelFactory::createBike(std::unordered_map<std::string, double>a) {
    Bike* bike = nullptr;
    bike = new MountainBike("type", 0.00);

    return bike;
}
