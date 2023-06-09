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
    try {
        for (auto pair : this->bikeMap) {
            std::string key = pair.first;
            Bike* bike = pair.second;
            
            if(bike->getId() == id){
                if (Bike* bike = dynamic_cast<Bike*>(bike)) {
                    std::cout << "Bicicleta - " << "ID: " << bike->getId() << std::endl;

                    return;
                }
            }
        }
        throw std::runtime_error("Cliente não encontrado.");

        }
        catch(std::exception& e){
          std::cout << "Error: " << e.what() << std::endl;
    }
}

void BikeController::editBike(std::string id, double newPrice) {
      try{
        if (bikeMap.empty()) {
            throw std::runtime_error("Não existem bicicletas cadastradas.");
        } else {
            auto it = this->bikeMap.find(id);

            if( it != bikeMap.end() ){
                Bike* bike = it->second;

                this->bikeMap.erase(it);

                bike->setId(id);
                bike->setBikePrice(newPrice);  
                
                std::cout << "Bicicleta editada."  << std::endl;
            }else{
                throw std::runtime_error("Bicicleta não encontrada.");
            }
        }
    }
    catch(std::exception& e){
        std::cout << "Error: " << e.what() << std::endl;

    }

}

void BikeController::listAllBikes() {}

void BikeController::saveBikes() {}

void BikeController::loadBikes() {}
