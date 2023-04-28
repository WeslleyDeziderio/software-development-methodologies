#include "../include/ClassificationInfantil.hpp"

int ClassificationInfantil::getCodigoPreco() {
    return Tape::INFANTIL;
}
double ClassificationInfantil::getValorAluguel(int diasAlugada){
    double valorCorrente = 1.5;
    if (diasAlugada > 3) {
        valorCorrente += (diasAlugada - 3) * 1.5;
    }
    return valorCorrente;
}