#ifndef CLASSIFICATIONINFANTIL_HPP
#define CLASSIFICATIONINFANTIL_HPP
#include "Classification.hpp"

class ClassificationInfantil : public Classification {

public:
    ClassificationInfantil();
    virtual ~ClassificationInfantil();
    int getCodigoPreco()override;
    double getValorAluguel(int diasAlugada)override;

};
#endif