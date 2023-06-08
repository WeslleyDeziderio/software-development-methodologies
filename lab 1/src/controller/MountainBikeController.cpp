#include "../../include/controller/MountainBikeController.hpp"
#include "../../include/factories/Bikes/MountainBikeModelFactory.hpp"

#include <fstream>
#include <sstream>

MountainBikeController::MountainBikeController() {}

MountainBikeController::~MountainBikeController() {}

void MountainBikeController::registerBike(std::unordered_map<std::string, double> aux) {
    BikeModelFactory* bikeFactory = new MountainBikeModelFactory();
    Bike* bike = bikeFactory->createBike(aux);
}

void MountainBikeController::editBike(std::string id, double newPrice) {}

void MountainBikeController::findBike(std::string id) {}

void MountainBikeController::deleteBike(std::string id) {}

std::string MountainBikeController::getMountainBikeById(std::string id) {}

void MountainBikeController::loadBikes() {}

void MountainBikeController::saveBikes() {}