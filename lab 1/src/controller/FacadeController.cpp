#include "../../include/controller/FacadeController.hpp"
#include "../../include/controller/ClientController.hpp"
#include "../../include/controller/BikeController.hpp"
#include <cstdlib> 


FacadeController::FacadeController(){

}

void FacadeController::listAllUsers() {
    system("clear");
    this->managerController_ = new ManagerController();
    this->clientController_ = new ClientController();
    this->managerController_->listAllManagers();
    this->clientController_->listAllClients();
    system("read -p '\n\n\n\nPress enter to continue.' var");
    system("clear");

}

void FacadeController::listAllUsersOrdered() {
    system("clear");
    this->managerController_ = new ManagerController();
    this->clientController_ = new ClientController();
    this->managerController_->listAllManagersOrdered();
    this->clientController_->listAllClientsOrdered();
    system("read -p '\n\n\n\nPress enter to continue.' var");
    system("clear");

}

void FacadeController::listAllBikes() {

}