#ifndef RENT_HPP
#define RENT_HPP

#include <string>

// Declarações adiantadas
class Client;
class Tape;
class Classification;

class Rent{

private:
    Tape* tape;
    int diasAlugada;
    Client* client;

public:

    Rent( Client client, Tape tape, int diasAlugada);
    ~Rent();
    Tape* getTape();
    int getDiasAlugada();
    int getValorAluguel(int diasAlugada);
    int getValorFidelidade();
    void setValorFidelidade(int valorFidelidade);
    void setClient(Client client);
    void setTape(Tape tape);
    void setDiasAlugada(int diasAlugada);
    std::string getClient();

};


#endif