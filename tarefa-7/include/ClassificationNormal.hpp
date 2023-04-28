#ifndef CLASSIFICATIONNORMAL_HPP
#define CLASSIFICATIONNORMAL_HPP
#include "Classification.hpp"

class ClassificationNormal : public Classification {

    int getCodigoPreco()override;
    double getValorAluguel(int diasAlugada)override;

};
#endif