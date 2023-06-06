#include "../../include/controller/FacadeController.hpp"
#include "../../include/controller/ClientController.hpp"
#include "../../include/controller/BikeController.hpp"
#include <cstdlib> 

FacadeController* FacadeController::instance = nullptr;

FacadeController::FacadeController(){
    this->userController_ = new UserController(); 
    this->bikeController_ = new BikeController();
    this->clientController_ = new ClientController();
    this->managerController_ = new ManagerController();
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

void FacadeController::deleteClient(std::string login) {
    system("clear");
    this->clientController_->deleteUser(login);
    system("read -p '\n\n\n\nPress enter to continue.' var");
    system("clear");

}

void FacadeController::deleteManager(std::string login) {
    system("clear");
    this->managerController_->deleteUser(login);
    system("read -p '\n\n\n\nPress enter to continue.' var");
    system("clear");

}

void FacadeController::findClient(std::string login) {
    system("clear");
    this->clientController_->findUser(login);
    system("read -p '\n\n\n\nPress enter to continue.' var");
    system("clear");

}

void FacadeController::findManager(std::string login) {
    system("clear");
    this->managerController_->findUser(login);
    system("read -p '\n\n\n\nPress enter to continue.' var");
    system("clear");

}

void FacadeController::listAllUsers() {
    system("clear");
    this->managerController_->listAllManagers();
    this->clientController_->listAllClients();
    system("read -p '\n\n\n\nPress enter to continue.' var");
    system("clear");

}

void FacadeController::registerClient(std::unordered_map<std::string, std::string> auxMap) {
    system("clear");
    this->clientController_->registerUser(auxMap);
    system("clear");
}

void FacadeController::registerManager(std::unordered_map<std::string, std::string> auxMap) {
    system("clear");
    this->managerController_->registerUser(auxMap);
    system("clear");
}

void FacadeController::registerBike() {
    std::string aux;
    this->bikeController_->registerBike(aux);
}

void FacadeController::listAllBikes() {

}