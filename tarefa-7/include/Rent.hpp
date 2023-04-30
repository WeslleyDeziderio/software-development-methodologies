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

    Rent( Client* client, Tape* tape, int diasAlugada);
    ~Rent();
    Tape* getTape();
    int getDiasAlugada();
<<<<<<< HEAD
    int getValorAluguel();
    int getValorFidelidade();
    void setValorFidelidade(int valorFidelidade);
=======
    int getValorAluguel(int diasAlugada);
    int getValorFidelidade();
    void setValorFidelidade(int valorFidelidade);
    void setDiasAlugada(int diasAlugada);
>>>>>>> 4673e5820df6a71f0f08e72fe19a465a5f5ddec2
    std::string getClient();

};


#endif