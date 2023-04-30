#include "../include/Rent.hpp"
#include "../include/Tape.hpp"
#include "../include/Client.hpp"
#include "../include/Classification.hpp"
#include "../include/ClassificationNormal.hpp"
#include "../include/ClassificationLancamento.hpp"
#include "../include/ClassificationInfantil.hpp"


Tape::Tape(std::string titulo, int codigoDePreco){
    this->titulo = titulo;
    setCodigoDePreco(codigoDePreco);
}

Tape::~Tape() {
}

std::string Tape::getTitulo(){
    return titulo;
}

void Tape::setAluguel(Rent* rent){
    TapesAlugadas.push_back(rent);
}

int Tape::getCodigoDePreco(){
    return classification->getCodigoPreco();
}

void Tape::setCodigoDePreco(int codigoDePreco){
    switch (codigoDePreco)
    {
    case Tape::NORMAL:
        this->classification = new ClassificationNormal();
        break;
    case Tape::LANCAMENTO:
        this->classification = new ClassificationLancamento();
        break;
    case Tape::INFANTIL:
        this->classification = new ClassificationInfantil();
        break;
    default:
        break;
    }
}

int Tape::getValorAluguel(int diasAlugada){
    return classification->getValorAluguel(diasAlugada);
}

int Tape::getValorTotal( std::string cliente){

    double valorTotal = 0.0;
    std::list<Rent*>::const_iterator alugueis = TapesAlugadas.begin();


    while(alugueis != TapesAlugadas.end()) {
        Rent* cada = *alugueis;
        if(cada->getClient() == cliente){
        valorTotal += getValorAluguel(cada->getDiasAlugada());
        }
        alugueis++;
    }

    return valorTotal;
}

int Tape::getValorFidelidade( int diasAlugada){

    int valorFidelidade = 1;

    if (classification->getCodigoPreco() == Tape::LANCAMENTO &&  diasAlugada > 1) {
        valorFidelidade += 1;
    }
    return valorFidelidade;
}

