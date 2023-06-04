#ifndef MODELFACTORY_HPP
#define MODELFACTORY_HPP

#include "../model/User.hpp"
#include "../model/Client.hpp"
#include "../model/Manager.hpp"

class ModelFactory {
private:
    
public:
    ModelFactory();
    ~ModelFactory();
    static User* createUser(std::unordered_map<std::string, std::string> auxMap);
};

#endif // MODELFACTORY.HPP