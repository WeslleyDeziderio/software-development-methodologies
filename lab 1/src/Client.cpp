#include "../include/Client.hpp"

Client::Client() {}

Client::~Client() {}

void Client::setTipoPlano(std::string tipoPlano) {
    this->tipoPlano = tipoPlano;
}

std::string Client::getTipoPlano() {
    return this->tipoPlano;
}