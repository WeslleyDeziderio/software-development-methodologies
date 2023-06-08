#include "../../include/controller/BikeController.hpp"
#include <algorithm>

BikeController::BikeController() {}

BikeController::~BikeController() {}

void BikeController::registerBike(std::unordered_map<std::string, double> a) {}

void BikeController::deleteBike(std::string id) {
    auto it = bikeMap.find(id);

    try {
        if (it != bikeMap.end()) {
            this->bikeMap.erase(id);
            std::cout << "Bicicleta" << id << "apagada" << std::endl;
        } else {
            throw std::runtime_error("Id não encontrado!");
        }
    }
    catch(const std::runtime_error e) {
        std::cout << "Erro: " << e.what() << std::endl;
    }
}

void BikeController::findBike(std::string id) {
    // int nextId = 1;
    // for (auto& pair : bikeMap) {
    //     Bike& bikePtr = pair.second;
    //     bikePtr->setId(nextId);
    //     nextId++;
    // }
}

void BikeController::editBike(std::string id, double newPrice) {}

void BikeController::listAllBikes() {}

void BikeController::saveBikes() {}

void BikeController::loadBikes() {}