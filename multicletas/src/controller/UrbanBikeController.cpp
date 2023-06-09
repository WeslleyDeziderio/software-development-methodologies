#include "../../include/controller/UrbanBikeController.hpp"
#include "../../include/model/factories/Bikes/UrbanBikeModelFactory.hpp"

#include <fstream>
#include <sstream>

UrbanBikeController::UrbanBikeController() {}

UrbanBikeController::~UrbanBikeController() {}

void UrbanBikeController::registerBike(std::unordered_map<std::string, double> aux) {
    BikeModelFactory* bikeFactory = new UrbanBikeModelFactory();
    Bike* bike = bikeFactory->createBike(aux);
}

void UrbanBikeController::editBike(std::string id, double newPrice) {
    auto it = bikeMap.find(id);

    if (it != bikeMap.end()) {
        UrbanBike* urbanBike = dynamic_cast<UrbanBike*>(it->second);

        if (urbanBike) {
            urbanBike->setBikePrice(newPrice);
            std::cout << "Bicicleta urbana com ID " << id << " atualizada." << std::endl;
        } else {
            std::cout << "Bicicleta urbana com ID " << id << " não encontrada." << std::endl;
        }
    }
}

void UrbanBikeController::findBike(std::string id) {
    auto it = bikeMap.find(id);

    if (it != bikeMap.end()) {
        UrbanBike* urbanBike = dynamic_cast<UrbanBike*>(it->second);
        if (urbanBike) {
            std::cout << "Bicicleta urbana encontrada:" << std::endl;
            std::cout << "ID: " << urbanBike->getId() << std::endl;
            std::cout << "Preço R$: " << urbanBike->getBikePrice() << std::endl;
        } else {
            std::cout << "Bicicleta urbana com id " << id << " não encontrada." << std::endl;
        }
    }
}

void UrbanBikeController::deleteBike(std::string id) {
    auto it = bikeMap.find(id);

    if (it != bikeMap.end()) {
        delete it->second;
        bikeMap.erase(it);
         std::cout << "Bicicleta urbana com ID " << id << " excluída." << std::endl;
    } else {
        std::cout << "Bicicleta urbana com ID " << id << " não encontrada." << std::endl;
    }
}

std::string UrbanBikeController::createUrbanBikeId() {
    static int nextId = 1;

    std::string id = "UB" + std::to_string(nextId);
    nextId++;

    return id;
}

void UrbanBikeController::saveBikes() {}

void UrbanBikeController::loadBikes() {}