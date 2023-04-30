#ifndef CLASSIFICATIONNORMAL_HPP
#define CLASSIFICATIONNORMAL_HPP
#include "Classification.hpp"

class ClassificationNormal : public Classification {

public:
    ClassificationNormal();
    virtual ~ClassificationNormal();
    int getCodigoPreco()override;
    double getValorAluguel(int diasAlugada)override;

};
#endif