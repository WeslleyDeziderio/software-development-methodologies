#ifndef TAPE_HPP
#define TAPE_HPP
#include "Rent.hpp"
#include "Classification.hpp"

#include <string>
#include <list>

class Tape {
public:

    static const int NORMAL = 0;
    static const int LANCAMENTO = 1;
    static const int INFANTIL = 2;

    Tape(std::string titulo, int codigoDePreco);
    ~Tape();

    Classification* classification;
    std::list<Rent> TapesAlugadas;
    std::string getTitulo();
    int getCodigoDePreco();
    void setCodigoDePreco(int codigoDePreco);
    int getValorAluguel(int diasAlugada);
    int getValorTotal(std::string cliente);
    int getValorFidelidade( int diasAlugados);


private:
    std::string titulo;
    int codigoDePreco;
    int classificacao;


};

#endif