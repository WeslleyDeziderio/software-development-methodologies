#ifndef TAPE_HPP
#define TAPE_HPP

#include <string>

class Tape {
public:
    static const int NORMAL = 0;
    static const int LANCAMENTO = 1;
    static const int INFANTIL = 2;

    Tape();
    ~Tape();
    Tape(std::string titulo, int codigoDePreco) : titulo(titulo), codigoDePreco(codigoDePreco) {}

    std::string getTitulo();
    int getCodigoDePreco();
    void setCodigoDePreco(int codigoDePreco);

private:
    std::string titulo;
    int codigoDePreco;
};

#endif