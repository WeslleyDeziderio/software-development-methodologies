#include "../../include/controller/FrontController.hpp"
#include "../../include/controller/ClientController.hpp"
#include "../../include/controller/BikeController.hpp"
#include <cstdlib> 

FrontController* FrontController::instance = nullptr;

FrontController::FrontController(){

    this->bikeController_ = new BikeController();
    this->clientController_ = new ClientController();
    this->managerController_ = new ManagerController();
}

FrontController* FrontController::getInstance() {
    if (instance == nullptr) {
        instance = new FrontController();
    }
    return instance;
}

void FrontController::deleteClient(std::string login) {
    system("clear");
    this->clientController_->deleteUser(login);
    system("read -p '\n\n\n\nPress enter to continue.' var");
    system("clear");

}

void FrontController::deleteManager(std::string login) {
    system("clear");
    this->managerController_->deleteUser(login);
    system("read -p '\n\n\n\nPress enter to continue.' var");
    system("clear");

}

void FrontController::findClient(std::string login) {
    system("clear");
    this->clientController_->findUser(login);
    system("read -p '\n\n\n\nPress enter to continue.' var");
    system("clear");

}

void FrontController::findManager(std::string login) {
    system("clear");
    this->managerController_->findUser(login);
    system("read -p '\n\n\n\nPress enter to continue.' var");
    system("clear");

}

void FrontController::listAllClients() {
    system("clear");
    this->clientController_->listAllClients();
    system("read -p '\n\n\n\nPress enter to continue.' var");
    system("clear");

}

void FrontController::listAllManagers() {
    system("clear");
    this->managerController_->listAllManagers();
    system("read -p '\n\n\n\nPress enter to continue.' var");
    system("clear");

}

void FrontController::registerClient(std::unordered_map<std::string, std::string> auxMap) {
    system("clear");
    this->clientController_->registerUser(auxMap);
    system("clear");
}

void FrontController::registerManager(std::unordered_map<std::string, std::string> auxMap) {
    system("clear");
    this->managerController_->registerUser(auxMap);
    system("clear");
}

void FrontController::registerBike() {
    std::string aux;
    this->bikeController_->registerBike(aux);
}

void FrontController::saveClients(){
    this->clientController_->saveUsers();
    system("read -p '\n\n\n\nPress enter to continue.' var");
}

void FrontController::saveManagers(){
    this->managerController_->saveUsers();
    system("read -p '\n\n\n\nPress enter to continue.' var");
}

void FrontController::updateManagersLogin(std::string login, std::string newLogin){
    system("clear");
    this->managerController_->updateLogin(login, newLogin);
    system("read -p '\n\n\n\nPress enter to continue.' var");
}

void FrontController::updateManagersPassword(std::string login, std::string newPassword){
    system("clear");
    this->managerController_->updatePassword(login, newPassword);
    system("read -p '\n\n\n\nPress enter to continue.' var");
}

void FrontController::updateManagersEstablishment(std::string login, std::string newEstablishment){
    system("clear");
    this->managerController_->updateEstablishment(login, newEstablishment);
    system("read -p '\n\n\n\nPress enter to continue.' var");
}

void FrontController::updateManagersCnpj(std::string login, std::string newCnpj){
    system("clear");
    this->managerController_->updateCnpj(login, newCnpj);
    system("read -p '\n\n\n\nPress enter to continue.' var");
}

void FrontController::updateClientsLogin(std::string login, std::string newLogin){
    system("clear");
    this->clientController_->updateLogin(login, newLogin);
    system("read -p '\n\n\n\nPress enter to continue.' var");
}

void FrontController::updateClientsPassword(std::string login, std::string newPassword){
    system("clear");
    this->clientController_->updatePassword(login, newPassword);
    system("read -p '\n\n\n\nPress enter to continue.' var");
}

void FrontController::updateClientsPlan(std::string login, std::string newPlan){
    system("clear");
    this->clientController_->updatePlan(login, newPlan);
    system("read -p '\n\n\n\nPress enter to continue.' var");
}
