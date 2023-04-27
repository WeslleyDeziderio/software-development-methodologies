#ifndef RENT_HPP
#define RENT_HPP
#include "Tape.hpp"
#include "Client.hpp"

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
};


#endif