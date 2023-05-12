#ifndef CLIENT_HPP
#define CLIENT_HPP

#include "User.hpp"
#include <string>

class Client : public User {
private:
    std::string tipoPlano;
public:
    Client();
    virtual ~Client();
    void setTipoPlano(std::string tipoPlano);
    std::string getTipoPlano();
};

#endif //CLIENT_HPP