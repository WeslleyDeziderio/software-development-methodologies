#include "../../include/controller/ElectricBikeController.hpp"
#include "../../include/model/factories/Bikes/ElectricBikeModelFactory.hpp"

#include <fstream>
#include <sstream>

ElectricBikeController::ElectricBikeController() {}

ElectricBikeController::~ElectricBikeController() {}

void ElectricBikeController::registerBike(std::unordered_map<std::string, double> aux) {
    BikeModelFactory* bikeFactory = new ElectricBikeModelFactory();
    Bike* bike = bikeFactory->createBike(aux);
}

void ElectricBikeController::editBike(std::string id, double newPrice) {
    auto it = bikeMap.find(id);

    if (it != bikeMap.end()) {
        ElectricBike* electricBike = dynamic_cast<ElectricBike*>(it->second);

        if (electricBike) {
            electricBike->setBikePrice(newPrice);
            std::cout << "Bicicleta elétrica com ID " << id << " atualizada." << std::endl;
        } else {
            std::cout << "Bicicleta elétrica com ID " << id << " não encontrada." << std::endl;
        }
    }
}

void ElectricBikeController::findBike(std::string id) {
    auto it = bikeMap.find(id);

    if (it != bikeMap.end()) {
        ElectricBike* electricBike = dynamic_cast<ElectricBike*>(it->second);
        if (electricBike) {
            std::cout << "Bicicleta elétric encontrada:" << std::endl;
            std::cout << "ID: " << electricBike->getId() << std::endl;
            std::cout << "Preço R$: " << electricBike->getBikePrice() << std::endl;
         } else {
            std::cout << "Bicicleta elétrica com id " << id << " não encontrada." << std::endl;
         }
    }
}

void ElectricBikeController::deleteBike(std::string id) {
    auto it = bikeMap.find(id);

    if (it != bikeMap.end()) {
        delete it->second;
        bikeMap.erase(it);
        std::cout << "Bicicleta elétrica com ID " << id << " excluída." << std::endl;
    } else {
        std::cout << "Bicicleta elétrica com ID " << id << " não encontrada." << std::endl;
    }
}

std::string ElectricBikeController::createElectricBikeId() {
    static int nextId = 1;
    std::string id = "EB" + std::to_string(nextId);
    nextId++;

    return id;
}

void ElectricBikeController::loadBikes() {}

void ElectricBikeController::saveBikes() {}