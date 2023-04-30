#ifndef CLIENT_HPP
#define CLIENT_HPP
#include "Tape.hpp"
#include <iostream>

// Declarações adiantadas
class Rent;
class Tape;
class Classification;

class Client {

protected:
<<<<<<< HEAD
  Tape *tapes;
=======
  std::list<Rent> tapesAlugadas;
>>>>>>> 4673e5820df6a71f0f08e72fe19a465a5f5ddec2
  std::string nome;
  int pontosDeFidelidade = 0;
public:
  Client(std::string nome);
  ~Client();

  std::string getNome();
  void setNome(std::string nome);
  void setValorFidelidade(int pontosDeFidelidade);
<<<<<<< HEAD
  int getPontosDeFidelidade();
  std::string extrato();
=======
  void setAluguel(Rent rent);
  int getValorTotal();
  std::string extrato();
  int getPontosDeFidelidade();
>>>>>>> 4673e5820df6a71f0f08e72fe19a465a5f5ddec2

};

#endif