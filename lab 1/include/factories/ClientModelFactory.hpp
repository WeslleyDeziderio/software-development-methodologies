#ifndef CLIENTMODELFACTORY_HPP
#define CLIENTMODELFACTORY_HPP

#include "../../include/model/Client.hpp"
#include "ModelFactory.hpp"

class ClientModelFactory : public ModelFactory {
private:
public:
    ClientModelFactory();
    ~ClientModelFactory();
    User* createUser(std::unordered_map<std::string, std::string> auxMap) override;
};

#endif // CLIENTMODELFACTORY.HPP
