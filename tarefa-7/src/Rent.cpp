#include "../include/Rent.hpp"
#include "../include/Tape.hpp"
#include "../include/Client.hpp"
#include "../include/Classification.hpp"

Rent::Rent(Client* client, Tape* tape, int diasAlugada){
    this->tape = tape;
    this->diasAlugada = diasAlugada;
    this->client = client;
<<<<<<< HEAD
    client->setValorFidelidade(tape->getValorFidelidade(diasAlugada));
    
    Rent aux(client, tape, diasAlugada);
    tape->setAluguel(aux);
=======
    this->client->setValorFidelidade(tape->getValorFidelidade(diasAlugada));
    Rent aux = *this;
    client->setAluguel(aux);
    client->setValorFidelidade(tape->getValorFidelidade(diasAlugada));
>>>>>>> 4673e5820df6a71f0f08e72fe19a465a5f5ddec2
}

Rent::~Rent(){
}

Tape* Rent::getTape(){
    return tape;
}

int Rent::getDiasAlugada(){
    return diasAlugada;

}

<<<<<<< HEAD
int Rent::getValorAluguel(){
=======
int Rent::getValorAluguel(int diasAlugada){
>>>>>>> 4673e5820df6a71f0f08e72fe19a465a5f5ddec2
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
<<<<<<< HEAD
=======
}

void Rent::setDiasAlugada(int diasAlugada){
    this->diasAlugada = diasAlugada;
>>>>>>> 4673e5820df6a71f0f08e72fe19a465a5f5ddec2
}