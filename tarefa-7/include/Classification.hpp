#ifndef CLASSIFICATION_HPP
#define CLASSIFICATION_HPP
#include "Tape.hpp"


class Classification {
public:
    virtual int getCodigoPreco() ;
    virtual double getValorAluguel(int diasAlugada);
private:
    int diasAlugada;
};

#endif