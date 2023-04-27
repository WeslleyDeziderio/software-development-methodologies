#include "../include/Client.hpp"

Client::Client(std::string nome) {
    this->nome = nome;
}

Client::~Client() {
}

std::string Client::getNome(){
    return nome;
}

void Client::setNome(std::string nome){
    this->nome = nome;
}

void Client::showTapesAlugadas(){
    std::cout << "Tapes alugadas por " << nome << ":" << std::endl;
    for (std::list<Rent>::iterator it = TapesAlugadas.begin(); it != TapesAlugadas.end(); ++it){
        std::cout << "Titulo: " << it->getTape()->getTitulo() << std::endl;
        std::cout << "Alugada por " << it->getDiasAlugada() << " dias." <<std::endl;
    }
}

void Client::setTapesAlugadas(Rent& rent){
    TapesAlugadas.push_back(rent);
}