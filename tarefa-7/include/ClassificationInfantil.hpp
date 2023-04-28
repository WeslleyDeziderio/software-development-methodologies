#ifndef CLASSIFICATIONINFANTIL_HPP
#define CLASSIFICATIONINFANTIL_HPP
#include "Classification.hpp"

class ClassificationInfantil : public Classification {

    int getCodigoPreco()override;

    double getValorAluguel(int diasAlugada)override;

};
#endif