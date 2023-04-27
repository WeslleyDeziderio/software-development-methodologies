#include "../include/client.hpp"

int main() {
    Client c1("Juliana");

    c1.adicionaRent(Rent(Tape("O Exorcista", Tape::NORMAL), 3));
    c1.adicionaRent(Rent(Tape("Men in Black", Tape::NORMAL), 2));
    c1.adicionaRent(Rent(Tape("Jurassic Park III", Tape::LANCAMENTO), 3));
    c1.adicionaRent(Rent(Tape("Planeta dos Macacos", Tape::LANCAMENTO), 4));
    c1.adicionaRent(Rent(Tape("Pateta no Planeta dos Macacos", Tape::INFANTIL), 10));
    c1.adicionaRent(Rent(Tape("O Rei Leao", Tape::INFANTIL), 30));

    std::cout << c1.extrato() << std::endl;

    return 0;
}

