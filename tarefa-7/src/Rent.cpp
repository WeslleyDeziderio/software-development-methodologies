#include "../include/Rent.hpp"
#include "../include/Tape.hpp"
#include "../include/Client.hpp"
#include "../include/Classification.hpp"

Rent::Rent(Client client, Tape tape, int diasAlugada){
    this->tape = &tape;
    this->diasAlugada = diasAlugada;
    this->client = &client;
    this->client->setValorFidelidade(tape.getValorFidelidade(diasAlugada));
    Rent aux = *this;
    std::cout << "aux: " << aux.getTape()->getTitulo() << std::endl;
    this->client->setAluguel(&aux);
}

Rent::~Rent(){
}

Tape* Rent::getTape(){
    return tape;
}

int Rent::getDiasAlugada(){
    return diasAlugada;

}

int Rent::getValorAluguel(int diasAlugada){
    return tape->getValorAluguel(diasAlugada);
}

void Rent::setValorFidelidade(int valorFidelidade){
    client->setValorFidelidade(valorFidelidade);
}

int Rent::getValorFidelidade(){
    return tape->getValorFidelidade(diasAlugada);
}

std::string Rent::getClient(){
    return client->getNome();
}

void Rent::setClient(Client client){
    this->client = &client;
}

void Rent::setTape(Tape tape){
    this->tape = &tape;
}

void Rent::setDiasAlugada(int diasAlugada){
    this->diasAlugada = diasAlugada;
}