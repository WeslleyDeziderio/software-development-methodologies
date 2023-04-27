#include "../include/Client.hpp"

Client::Client(const std::string& nome) {
    this->nome = nome;
}

Client::~Client() {
}

std::string Client::getNome(){
    return nome;
}

void Client::adicionaRent(const Rent& rent){
    TapesAlugadas.push_back(rent);
}

std::string Client::extrato(){
    const std::string fimDeLinha = "\n";
    double valorTotal = 0.0;
    int pontosDeAlugadorFrequente = 0;
    std::vector<Rent>::const_iterator alugueis = TapesAlugadas.begin();
    std::string resultado = "Registro de Alugueis de " + getNome() + fimDeLinha;

    while(alugueis != TapesAlugadas.end()) {
    double valorCorrente = 0.0;
    Rent cada = *alugueis;


    // determina valores para cada linha
    switch(cada.getTape().getCodigoDePreco()) {
    case Tape::NORMAL:
    valorCorrente += 2;
    if(cada.getDiasAlugada() > 2) {
        valorCorrente += (cada.getDiasAlugada() - 2) * 1.5;
    }
    break;
    case Tape::LANCAMENTO:
    valorCorrente += cada.getDiasAlugada() * 3;
    break;
    case Tape::INFANTIL:
    valorCorrente += 1.5;
    if(cada.getDiasAlugada() > 3) {
        valorCorrente += (cada.getDiasAlugada() - 3) * 1.5;
    }
    break;
    } //switch
    // trata de pontos de alugador frequente
    pontosDeAlugadorFrequente++;
    // adiciona bonus para Rent de um lan�amento por pelo menos 2 dias
    if(cada.getTape().getCodigoDePreco() == Tape::LANCAMENTO &&
        cada.getDiasAlugada() > 1) {
        pontosDeAlugadorFrequente++;
    }

    // mostra valores para este Rent
    resultado += "\t" + cada.getTape().getTitulo() + "\t" + std::to_string(valorCorrente) + fimDeLinha;
    valorTotal += valorCorrente;
    ++alugueis;
    } // while
    // adiciona rodap�
    resultado += "Valor total devido: " + std::to_string(valorTotal) + fimDeLinha;
    resultado += "Voce acumulou " + std::to_string(pontosDeAlugadorFrequente) +
            " pontos de alugador frequente";
    return resultado;

}