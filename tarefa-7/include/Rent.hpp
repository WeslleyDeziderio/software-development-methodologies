#ifndef RENT_HPP
#define RENT_HPP

#include <string>

class Rent{

private:
    Tape* tape;
    int diasAlugada;
    Client* client;

public:

    Rent( Client* client, Tape* tape, int diasAlugada);
    ~Rent();
    Tape* getTape();
    int getDiasAlugada();
    int getValorAluguel();
    int getValorFidelidade();
    void setValorFidelidade(int valorFidelidade);
    std::string getClient();

};


#endif