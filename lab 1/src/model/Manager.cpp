#include "../../include/model/Manager.hpp"

Manager::Manager(){

};

Manager::Manager(std::string login, std::string password){
    setLogin(login);
    setPassword(password);
};

Manager::Manager(std::string login, std::string password, std::string establishment, std::string cnpjCode){
    setLogin(login);
    setPassword(password);
    setEstablishment(establishment);
    setCnpjCode(cnpjCode);
};

Manager::~Manager() {};

void Manager::setEstablishment(std::string establishment) {
    this->establishment = establishment;
}

std::string Manager::getEstablishment() {
    return this->establishment;
}

void Manager::setCnpjCode(std::string cnpjCode) {
    this->cnpjCode = cnpjCode;
}

std::string Manager::getCnpjCode() {
    return this->cnpjCode;
}

