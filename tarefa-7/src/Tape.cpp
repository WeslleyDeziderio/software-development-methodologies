#include "../include/Tape.hpp"

Tape::Tape() {

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