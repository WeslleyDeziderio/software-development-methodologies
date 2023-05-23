#include "../../include/controller/FacadeController.hpp"
#include "../../include/controller/ClientController.hpp"
#include "../../include/controller/BikeController.hpp"
#include "../view/UserView.cpp" 
#include <cstdlib> 

FacadeController* FacadeController::instance = nullptr;

FacadeController::FacadeController(){
   this->userController_ = new UserController(); 
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

void FacadeController::getQtdUserRegister() {
    system("clear");
    this->userController_->listAllUsers();
    system("read -p '\n\n\n\nAperte Enter para continuar' var");
    system("clear");
}

void FacadeController::registerUser() {
    system("clear");
    this->userController_->registerUser();
    system("clear");
}
