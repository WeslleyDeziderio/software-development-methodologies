#include "../../include/controller/UrbanBikeController.hpp"
#include "../../include/factories/Bikes/UrbanBikeModelFactory.hpp"

#include <fstream>
#include <sstream>

UrbanBikeController::UrbanBikeController() {}

UrbanBikeController::~UrbanBikeController() {}

void UrbanBikeController::registerBike(std::unordered_map<std::string, double> aux) {
    BikeModelFactory* bikeFactory = new UrbanBikeModelFactory();
    Bike* bike = bikeFactory->createBike(aux);
}

void UrbanBikeController::editBike(std::string id, double newPrice) {}

void UrbanBikeController::findBike(std::string id) {}

void UrbanBikeController::deleteBike(std::string id) {}

std::string UrbanBikeController::getUrbanBikesById(std::string id) {}

void UrbanBikeController::saveBikes() {}

void UrbanBikeController::loadBikes() {}