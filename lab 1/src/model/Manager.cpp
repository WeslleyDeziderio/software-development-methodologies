#include "../../include/model/Manager.hpp"

Manager::Manager(){

};

Manager::Manager(std::string login, std::string password){
    setLogin(login);
    setPassword(password);
};

Manager::Manager(std::string login, std::string password, std::string establishment, std::string pfjCode){
    setLogin(login);
    setPassword(password);
    setEstablishment(establishment);
    setPfjCode(pfjCode);
};

Manager::~Manager() {};

void Manager::setEstablishment(std::string establishment) {
    this->establishment = establishment;
}

std::string Manager::getEstablishment() {
    return this->establishment;
}

void Manager::setPfjCode(std::string pfjCode) {
    this->pfjCode = pfjCode;
}

std::string Manager::getPfjCode() {
    return this->pfjCode;
}

