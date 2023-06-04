#ifndef CLIENT_HPP
#define CLIENT_HPP

#include "User.hpp"
#include <string>
#include <vector>

class Client : public User {
private:
    std::string tipoPlano;
public:
    Client();
    Client(std::string login, std::string password, std::string tipoPlano);
    virtual ~Client();
    void setTipoPlano(std::string tipoPlano);
    std::string getTipoPlano();
};

#endif //CLIENT_HPP