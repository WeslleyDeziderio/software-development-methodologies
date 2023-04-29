#include "../include/ClassificationLancamento.hpp"

ClassificationLancamento::ClassificationLancamento(){}

ClassificationLancamento::~ClassificationLancamento(){}

int ClassificationLancamento::getCodigoPreco(){
    return Tape::LANCAMENTO;
}

double ClassificationLancamento::getValorAluguel(int diasAlugada){
    return diasAlugada * 3;
}