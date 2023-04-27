#ifndef RENT_HPP
#define RENT_HPP

class Tape;

class Rent {
private:
    Tape* tape;
    int diasAlugada;
public:

    Rent(Tape* tape, int diasAlugada);
    Tape* getTape();
    int getDiasAlugada();
};


#endif