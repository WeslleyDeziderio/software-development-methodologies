#ifndef CLASSIFICATIONLANCAMENTO_HPP
#define CLASSIFICATIONLANCAMENTO_HPP
#include "Classification.hpp"

class ClassificationLancamento : public Classification {

public:
    ClassificationLancamento();
    virtual ~ClassificationLancamento();
    int getCodigoPreco()override;
    double getValorAluguel(int diasAlugada)override;

};
#endif