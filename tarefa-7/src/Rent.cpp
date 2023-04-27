#include "../include/Rent.hpp"

Rent::Rent(Client* client, Tape* tape, int diasAlugada){
    this->tape = tape;
    this->diasAlugada = diasAlugada;
    this->client = client;
}

Rent::~Rent(){
}

Tape* Rent::getTape(){
    return tape;
}

int Rent::getDiasAlugada(){
    return diasAlugada;

}