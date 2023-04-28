#include "../include/ClassificationLancamento.hpp"

int ClassificationLancamento::getCodigoPreco(){
    return Tape::LANCAMENTO;
}

double ClassificationLancamento::getValorAluguel(int diasAlugada){
    return diasAlugada * 3;
}