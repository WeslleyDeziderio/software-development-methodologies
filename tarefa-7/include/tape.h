#include <string>

class Tape {
public:
    static const int NORMAL = 0;
    static const int LANCAMENTO = 1;
    static const int INFANTIL = 2;

    Tape(std::string titulo, int codigoDePreco) : titulo(titulo), codigoDePreco(codigoDePreco) {}

    std::string getTitulo() {
        return titulo;
    }

    int getCodigoDePreco() {
        return codigoDePreco;
    }

    void setCodigoDePreco(int codigoDePreco) {
        this->codigoDePreco = codigoDePreco;
    }

private:
    std::string titulo;
    int codigoDePreco;
};

