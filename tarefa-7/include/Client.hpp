#ifndef CLIENT_HPP
#define CLIENT_HPP

#include <iostream>
#include "Tape.hpp"
#include <vector>

class Rent {

protected:
  Tape tape;
  int diasAlugada;
public:

  Rent(Tape tape, int diasAlugada) : tape(tape), diasAlugada(diasAlugada) {}
  Tape getTape() const { return tape; }
  int getDiasAlugada() const { return diasAlugada; }
};

class Client {

protected:

  std::string nome;
  std::vector<Rent> TapesAlugadas;

public:
  Client(const std::string& nome);
  ~Client();

  std::string getNome();

  void adicionaRent(const Rent& rent);
  std::string extrato();

};

#endif