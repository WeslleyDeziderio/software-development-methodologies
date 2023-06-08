#include "../../include/controller/ElectricBikeController.hpp"
#include "../../include/factories/Bikes/ElectricBikeModelFactory.hpp"

#include <fstream>
#include <sstream>

ElectricBikeController::ElectricBikeController() {}

ElectricBikeController::~ElectricBikeController() {}

void ElectricBikeController::registerBike(std::unordered_map<std::string, double> aux) {
    BikeModelFactory* bikeFactory = new ElectricBikeModelFactory();
    Bike* bike = bikeFactory->createBike(aux);
}

void ElectricBikeController::editBike(std::string id, double newPrice) {}

void ElectricBikeController::findBike(std::string id) {}

void ElectricBikeController::deleteBike(std::string id) {}

void ElectricBikeController::loadBikes() {}

void ElectricBikeController::saveBikes() {}