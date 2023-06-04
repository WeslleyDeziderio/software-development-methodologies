#include "../../include/controller/FacadeController.hpp"
#include "../../include/controller/ClientController.hpp"
#include "../../include/controller/BikeController.hpp"
#include <cstdlib> 

FacadeController* FacadeController::instance = nullptr;

FacadeController::FacadeController(){
   this->userController_ = new UserController(); 
   this->clientController_ = new ClientController();
   this->bikeController_ = new BikeController();
}

FacadeController* FacadeController::getInstance() {
    if (instance == nullptr) {
        instance = new FacadeController();
    }
    return instance;
}

void FacadeController::editClient(std::string login, std::string newLogin, std::string newPassword, std::string newPlan) {
    system("clear");
    this->clientController_->editUser(login, newLogin, newPassword);
    this->clientController_->editPlan(login, newPlan);
    system("read -p '\n\n\n\nPress enter to continue.' var");
    system("clear");
}

void FacadeController::deleteUser(std::string login) {
    system("clear");
    this->userController_->deleteUser(login);
    system("read -p '\n\n\n\nPress enter to continue.' var");
    system("clear");

}

void FacadeController::findUser(std::string login) {
    system("clear");
    this->userController_->findUser(login);
    system("read -p '\n\n\n\nPress enter to continue.' var");
    system("clear");

}

void FacadeController::listAllUsers() {
    system("clear");
    this->userController_->listAllUsers();
    system("read -p '\n\n\n\nPress enter to continue.' var");
    system("clear");

}

void FacadeController::listAllClients() {
    system("clear");
    this->clientController_->listAllClients();
    system("read -p '\n\n\n\nPress enter to continue.' var");
    system("clear");

}

void FacadeController::setEntityRegister(const Bike& bike) {

}

void FacadeController::editEntity(const Bike& bike) {

}

void FacadeController::deleteEntity(const Bike& bike) {

}

void FacadeController::findEntity(const Bike& bike) {

}

void FacadeController::listAllBikes() {

}

void FacadeController::registerClient(std::unordered_map<std::string, std::string> auxMap) {
    system("clear");
    this->clientController_->registerUser(auxMap);
    system("clear");
}

void FacadeController::registBike() {
    std::string aux;
    this->bikeController_->registBike(aux);
}
