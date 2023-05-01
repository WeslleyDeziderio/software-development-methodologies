#include "../include/Rent.hpp"
#include "../include/Tape.hpp"
#include "../include/Client.hpp"
#include "../include/Classification.hpp"

Rent::Rent(Client* client, Tape* tape, int diasAlugada){
    this->tape = tape;
    this->diasAlugada = diasAlugada;
    this->client = client;
    this->client->setValorFidelidade(tape->getValorFidelidade(diasAlugada));
    Rent aux = *this;
    client->setAluguel(aux);
    client->setValorFidelidade(tape->getValorFidelidade(diasAlugada));
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

void Rent::setDiasAlugada(int diasAlugada){
    this->diasAlugada = diasAlugada;
}