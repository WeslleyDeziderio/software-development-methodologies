#ifndef CLIENT_HPP
#define CLIENT_HPP

#include "../include/User.hpp"

#include <string>

class Client : public User {
private:
    std::string tipoPlano;
public:
    void setTipoPlano(std::string tipoPlano);
    std::string getTipoPlano();
};

#endif //CLIENT_HPP