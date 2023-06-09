#include "../../include/controller/MountainBikeController.hpp"
#include "../../include/model/factories/Bikes/MountainBikeModelFactory.hpp"

#include <fstream>
#include <sstream>

MountainBikeController::MountainBikeController() {}

MountainBikeController::~MountainBikeController() {}

void MountainBikeController::registerBike(std::unordered_map<std::string, double> aux) {
    BikeModelFactory* bikeFactory = new MountainBikeModelFactory();
    Bike* bike = bikeFactory->createBike(aux);
}

void MountainBikeController::editBike(std::string id, double newPrice) {
    auto it = bikeMap.find(id);

    if (it != bikeMap.end()) {
        MountainBike* mountainBike = dynamic_cast<MountainBike*>(it->second);

        if (mountainBike) {
            mountainBike->setBikePrice(newPrice);
            std::cout << "Bicicleta de montanha com ID " << id << " atualizada." << std::endl;
        } else {
            std::cout << "Bicicleta de montanha com ID " << id << " não encontrada." << std::endl;
        }
    }
}

void MountainBikeController::findBike(std::string id) {
    auto it = bikeMap.find(id);

    if (it != bikeMap.end()) {
        MountainBike* mountainBike = dynamic_cast<MountainBike*>(it->second);
        if (mountainBike) {
            std::cout << "Bicicleta de montanha encontrada:" << std::endl;
            std::cout << "ID: " << mountainBike->getId() << std::endl;
            std::cout << "Preço R$: " << mountainBike->getBikePrice() << std::endl;
        } else {
            std::cout << "Bicicleta de montanha com id " << id << " não encontrada." << std::endl;
        }
    }
}

void MountainBikeController::deleteBike(std::string id) {
    auto it = bikeMap.find(id);

    if (it != bikeMap.end()) {
        delete it->second;
        bikeMap.erase(it);
        std::cout << "Bicicleta de montanha com ID " << id << " excluída." << std::endl;
    } else {
        std::cout << "Bicicleta de montanha com ID " << id << " não encontrada." << std::endl;
    }
}

std::string MountainBikeController::createMountainBikeIds() {
    static int nextId = 1;
    std::string id = "MB" + std::to_string(nextId);
    nextId++;

    return id;
}

void MountainBikeController::loadBikes() {}

void MountainBikeController::saveBikes() {}