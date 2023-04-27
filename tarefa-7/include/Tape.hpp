#ifndef TAPE_HPP
#define TAPE_HPP
#include "Rent.hpp"

#include <string>
#include <list>

class Tape {
public:

    Tape(std::string titulo, int codigoDePreco, int classificacao);
    ~Tape();

    std::string getTitulo();
    int getCodigoDePreco();
    void setCodigoDePreco(int codigoDePreco);
    int getClassificacao();
    void setClassificacao(int classificacao);

    void adicionaRent(Rent& rent);
    std::string extrato();

private:
    std::string titulo;
    int codigoDePreco;
    int classificacao;
    std::list<Rent> TapesAlugadas;

};

#endif