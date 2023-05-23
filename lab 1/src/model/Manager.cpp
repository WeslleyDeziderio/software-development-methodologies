#include "../../include/model/Manager.hpp"

Manager::Manager() {};

Manager::~Manager() {};

void Manager::setEstablishment(std::string establishment) {
    this->establishment = establishment;
}

std::string Manager::getEstablishment() {
    return this->establishment;
}

void Manager::setPfjCode(std::string pfjCode) {
    this->establishment = establishment;
}

std::string Manager::getPfjCode() {
    return this->pfjCode;
}

