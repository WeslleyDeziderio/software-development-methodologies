#include "../../include/model/Client.hpp"

Client::Client(){

}

Client::Client(std::string login, std::string password, std::string plan){
    setLogin(login);
    setPassword(password);
    setTipoPlano(plan);
}

Client::~Client(){

}

void Client::setTipoPlano(std::string tipoPlano) {
    this->tipoPlano = tipoPlano;
}

std::string Client::getTipoPlano() {
    return this->tipoPlano;
}