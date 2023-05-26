#include "../../include/controller/FacadeController.hpp"
#include "../../include/controller/ClientController.hpp"
#include "../../include/controller/BikeController.hpp"
#include "../view/UserView.cpp" 
#include <cstdlib> 

FacadeController* FacadeController::instance = nullptr;

FacadeController::FacadeController(){
   this->userController_ = new UserController(); 
   this->clientController_ = new ClientController();
   this->manageBike_ = new ManageBike();
}

FacadeController* FacadeController::getInstance() {
    if (instance == nullptr) {
        instance = new FacadeController();
    }
    return instance;
}

void FacadeController::editEntity() {

}

void FacadeController::deleteEntity() {

}

void FacadeController::findEntity() {

}

void FacadeController::listAllUsers() {
    system("clear");
    this->userController_->listAllUsers();
    system("read -p '\n\n\n\nPress enter to continue.' var");
    system("clear");

}

void FacadeController::listAllClients() {
    system("clear");
    this->clientController_->listAllUsers();
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

void FacadeController::registerUser() {
    system("clear");
    this->userController_->registerUser();
    system("clear");
}

void FacadeController::registerClient() {
    system("clear");
    this->clientController_->registerUser();
    system("clear");
}

void FacadeController::registBike() {
    std::string aux;
    this->manageBike_->registBike(aux);
}
