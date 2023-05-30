#include "../../include/controller/FacadeController.hpp"
#include "../../include/controller/ClientController.hpp"
#include "../../include/controller/BikeController.hpp"
#include "../../include/controller/ManagerController.hpp"
#include "../view/UserView.cpp" 
#include <cstdlib> 

FacadeController* FacadeController::instance = nullptr;

FacadeController::FacadeController(){
   this->userController_ = new UserController(); 
   this->clientController_ = new ClientController();
   this->manageBike_ = new ManageBike();
   this->managerController_ = new ManagerController();
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

void FacadeController::listAllManagers() {
    system("clear");
    this->managerController_->listAllUsers();
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

void FacadeController::registerManager() {
    system("clear");
    this->managerController_->registerUser();
    system("clear");
}


void FacadeController::registBike() {
    std::string aux;
    this->manageBike_->registBike(aux);
}

void FacadeController::editClient() {
    system("clear");
    this->clientController_->editUser();
    system("clear");
}

void FacadeController::findClient() {
    system("clear");
    this->clientController_->findUser();
    system("read -p '\n\n\n\nPress enter to continue.' var");
    system("clear");
}

void FacadeController::deleteClient() {
    system("clear");
    this->clientController_->deleteUser();
    system("read -p '\n\n\n\nPress enter to continue.' var");
    system("clear");
}