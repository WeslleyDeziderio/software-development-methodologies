#include "../include/Client.hpp"

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

std::string Client::extrato(){
    std::string fimDeLinha = "\n";
    std::string extrato;
    extrato = "Registro de Alugueis de " + getNome() + fimDeLinha;

    extrato += "Valor total devido: " + tapes->getValorTotal(getNome()) + fimDeLinha;
    extrato += "Voce acumulou " + std::to_string(getPontosDeFidelidade()) + " pontos de fidelidade" + fimDeLinha;
    return extrato;
}
