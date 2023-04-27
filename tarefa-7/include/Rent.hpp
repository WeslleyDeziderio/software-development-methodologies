#ifndef RENT_HPP
#define RENT_HPP

class Tape;

class Rent{
private:
    Tape* tape;
    int diasAlugada;
public:

    Rent(Tape* tape, int diasAlugada);
    ~Rent();
    Tape* getTape();
    int getDiasAlugada();
};


#endif