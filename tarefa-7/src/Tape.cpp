#include "../include/Tape.hpp"

Tape::Tape(std::string titulo, int codigoDePreco){
    this->titulo = titulo;
    this->codigoDePreco = codigoDePreco;
}

Tape::~Tape() {
}

std::string Tape::getTitulo(){
    return titulo;
}

int Tape::getCodigoDePreco(){
    return codigoDePreco;
}

void Tape::setCodigoDePreco(int codigoDePreco){
    this->codigoDePreco = codigoDePreco;
}