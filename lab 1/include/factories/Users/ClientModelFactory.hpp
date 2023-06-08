#ifndef CLIENTMODELFACTORY_HPP
#define CLIENTMODELFACTORY_HPP

#include "../../../include/model/Client.hpp"
#include "UserModelFactory.hpp"

class ClientModelFactory : public UserModelFactory {
private:
public:
    ClientModelFactory();
    ~ClientModelFactory();
    User* createUser(std::unordered_map<std::string, std::string> auxMap) override;
};

#endif // CLIENTMODELFACTORY.HPP
