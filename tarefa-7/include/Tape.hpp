#ifndef TAPE_HPP
#define TAPE_HPP

#include <string>
#include <list>

// Declarações adiantadas
class Rent;
class Client;
class Classification;


class Tape {
public:

    static const int NORMAL = 0;
    static const int LANCAMENTO = 1;
    static const int INFANTIL = 2;

    Tape(std::string titulo, int codigoDePreco);
    ~Tape();

    Classification* classification;
    std::list<Rent*> TapesAlugadas;
    std::string getTitulo();
    int getCodigoDePreco();
    void setCodigoDePreco(int codigoDePreco);
    void setAluguel(Rent* rent);
    int getValorAluguel(int diasAlugada);
    int getValorTotal(std::string cliente);
    int getValorFidelidade( int diasAlugada);
    std::string extrato(Client* cliente);


private:
    std::string titulo;
    Client* client;
    int codigoDePreco;
    int classificacao;
    int diasAlugada;


};

#endif