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

std::string Tape::extrato(Client* cliente){
    std::string fimDeLinha = "\n";
    std::string extrato;

    extrato = "Registro de Alugueis de " + cliente->getNome() + fimDeLinha;
    extrato += "Valor total devido: " + std::to_string(getValorTotal(cliente->getNome())) + fimDeLinha;
    extrato += "Voce acumulou " + std::to_string(cliente->getPontosDeFidelidade()) + " pontos de fidelidade" + fimDeLinha;

    return extrato;
}


// std::string Tape::extrato(){
//     const std::string fimDeLinha = "\n";
//     double valorTotal = 0.0;
//     int pontosDeAlugadorFrequente = 0;
//     std::vector<Rent>::const_iterator alugueis = TapesAlugadas.begin();
//     std::string resultado = "Registro de Alugueis de " + getNome() + fimDeLinha;

//     while(alugueis != TapesAlugadas.end()) {
//     double valorCorrente = 0.0;
//     Rent cada = *alugueis;


//     // determina valores para cada linha
//     switch(cada.getTape().getCodigoDePreco()) {
    //     case Tape::NORMAL:
    //         valorCorrente += 2;
    //         if(cada.getDiasAlugada() > 2) {
    //             valorCorrente += (cada.getDiasAlugada() - 2) * 1.5;
    //         }
    //         break;
    //     case Tape::LANCAMENTO:
    //         valorCorrente += cada.getDiasAlugada() * 3;
    //         break;
    //     case Tape::INFANTIL:
    //         valorCorrente += 1.5;
    //         if(cada.getDiasAlugada() > 3) {
    //             valorCorrente += (cada.getDiasAlugada() - 3) * 1.5;
    //         }
    //         break;
//     } //switch
//     // trata de pontos de alugador frequente
//     pontosDeAlugadorFrequente++;
//     // adiciona bonus para Rent de um lan�amento por pelo menos 2 dias
//     if(cada.getTape().getCodigoDePreco() == Tape::LANCAMENTO &&
//         cada.getDiasAlugada() > 1) {
//         pontosDeAlugadorFrequente++;
//     }

//     // mostra valores para este Rent
//     resultado += "\t" + cada.getTape().getTitulo() + "\t" + std::to_string(valorCorrente) + fimDeLinha;
//     valorTotal += valorCorrente;
//     ++alugueis;
//     } // while

//     // adiciona rodap�
//     resultado += "Valor total devido: " + std::to_string(valorTotal) + fimDeLinha;
//     resultado += "Voce acumulou " + std::to_string(pontosDeAlugadorFrequente) +
//             " pontos de alugador frequente";
//     return resultado;

// }