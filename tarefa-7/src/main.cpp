#include "../include/Client.hpp"
#include "../include/Rent.hpp"
#include "../include/Tape.hpp"
#include "../include/Classification.hpp"
#include "../include/ClassificationNormal.hpp"
#include "../include/ClassificationLancamento.hpp"
#include "../include/ClassificationInfantil.hpp"

int main(){

    Client* cliente1 = new Client("João");
<<<<<<< HEAD
    Client* cliente2 = new Client("Maria");
=======
    Client* cliente2= new Client("Maria");
>>>>>>> 4673e5820df6a71f0f08e72fe19a465a5f5ddec2

    // Criando objetos de Tape
    Tape* tape1 = new Tape("O Exorcista", Tape::NORMAL);
    Tape* tape2 = new Tape("Jurassic Park III", Tape::LANCAMENTO);
    Tape* tape3 = new Tape("Planeta dos Macacos", Tape::LANCAMENTO);
    Tape* tape4 = new Tape("Pateta no Planeta dos Macacos", Tape::INFANTIL);
    Tape* tape5 = new Tape("O Rei Leao", Tape::INFANTIL);
    Tape* tape6 = new Tape("Men in Black", Tape::NORMAL);

    // Criando objeto de Rent

    Rent* rent1 = new Rent(cliente1, tape1, 3);
<<<<<<< HEAD

    Rent* rent2 = new Rent(cliente2, tape2, 3);

    // Rent* rent3 = new Rent(cliente1, tape3, 3);
    // Rent* rent4 = new Rent(cliente2, tape4, 10);
    // Rent* rent5 = new Rent(cliente1, tape5, 30);
    // Rent* rent6 = new Rent(cliente2, tape6, 2);
=======
    Rent* rent2 = new Rent(cliente2, tape2, 3);
    Rent* rent3 = new Rent(cliente1, tape3, 3);
    Rent* rent4 = new Rent(cliente2, tape4, 10);
    Rent* rent5 = new Rent(cliente1, tape5, 30);
    Rent* rent6 = new Rent(cliente2, tape6, 2);
>>>>>>> 4673e5820df6a71f0f08e72fe19a465a5f5ddec2

    std::cout << cliente1->extrato() << std::endl;
    std::cout << cliente2->extrato() << std::endl;

    // Liberando memória
<<<<<<< HEAD
    // delete cliente1;
    // delete cliente2;
    // delete tape1;
    // delete tape2;
    // delete rent1;
    // delete rent2;
=======
    delete cliente1;
    delete cliente2;
    delete tape1;
    delete tape2;
    delete rent1;
    delete rent2;
    delete rent3;
    delete rent4;
    delete rent5;
    delete rent6;
>>>>>>> 4673e5820df6a71f0f08e72fe19a465a5f5ddec2

    return 0;
    
}