#include "../include/Rent.hpp"

Rent::Rent(Tape* tape, int diasAlugada ){
    this->tape = tape;
    this->diasAlugada = diasAlugada;
    }

Rent::~Rent(){
}

Tape* Rent::getTape(){
    return tape;
}

int Rent::getDiasAlugada(){
    return diasAlugada;

}