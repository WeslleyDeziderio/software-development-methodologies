#ifndef CLIENT_HPP
#define CLIENT_HPP

#include <iostream>
#include "Tape.hpp"


class Client {

protected:
  Tape *tapes;
  std::string nome;
  int pontosDeFidelidade = 0;
public:
  Client(std::string nome);
  ~Client();

  std::string getNome();
  void setNome(std::string nome);
  void setValorFidelidade(int pontosDeFidelidade);
  int getPontosDeFidelidade();
  std::string extrato();

};

#endif