#ifndef CLIENT_HPP
#define CLIENT_HPP

#include <iostream>
#include "Rent.hpp"
#include <list>

class Client {

protected:

  std::string nome;
  std::list<Rent> TapesAlugadas;

public:
  Client(std::string nome);
  ~Client();

  std::string getNome();
  void setNome(std::string nome);
  void showTapesAlugadas();
  void setTapesAlugadas(Rent& rent);

};

#endif