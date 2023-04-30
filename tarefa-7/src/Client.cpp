#include "../include/Client.hpp"
#include "../include/Rent.hpp"
#include "../include/Tape.hpp"
#include "../include/Classification.hpp"

Client::Client(std::string nome){
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

int Client::getPontosDeFidelidade(){
    return pontosDeFidelidade;
}

void Client::setValorFidelidade(int pontosDeFidelidade){
    this->pontosDeFidelidade += pontosDeFidelidade;
}

<<<<<<< HEAD
std::string Client::extrato(){
    std::string fimDeLinha = "\n";
    std::string extrato;
    extrato = "Registro de Alugueis de " + getNome() + fimDeLinha;

    extrato += "Valor total devido: " + tapes->getValorTotal(getNome()) + fimDeLinha;
    extrato += "Voce acumulou " + std::to_string(getPontosDeFidelidade()) + " pontos de fidelidade" + fimDeLinha;
=======
void Client::setAluguel(Rent rent){
    tapesAlugadas.push_back(rent);
}

int Client::getValorTotal(){

    double valorTotal = 0.0;
    std::list<Rent>::const_iterator alugueis = tapesAlugadas.begin();


    while(alugueis != tapesAlugadas.end()) {
        Rent cada = *alugueis;
        valorTotal += cada.getValorAluguel(cada.getDiasAlugada());
        alugueis++;
    }

    return valorTotal;
}

std::string Client::extrato(){
    std::string fimDeLinha = "\n";
    std::string extrato;

    extrato = "Registro de Alugueis de " + getNome() + fimDeLinha;
    extrato += "Valor total devido: " + std::to_string(getValorTotal()) + fimDeLinha;
    extrato += "Voce acumulou " + std::to_string(getPontosDeFidelidade()) + " pontos de fidelidade" + fimDeLinha;

>>>>>>> 4673e5820df6a71f0f08e72fe19a465a5f5ddec2
    return extrato;
}
