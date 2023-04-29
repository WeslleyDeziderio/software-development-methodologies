#include "../include/ClassificationNormal.hpp"

ClassificationNormal::ClassificationNormal(){}

ClassificationNormal::~ClassificationNormal(){}

int ClassificationNormal::getCodigoPreco() {
    return Tape::NORMAL;
}

double ClassificationNormal::getValorAluguel(int diasAlugada){
    double valorCorrente = 2;
    if (diasAlugada > 2) {
        valorCorrente += (diasAlugada - 2) * 1.5;
    }
    return valorCorrente;
}