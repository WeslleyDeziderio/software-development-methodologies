#ifndef MODELFACTORY_HPP
#define MODELFACTORY_HPP

#include "../model/User.hpp"

class ModelFactory {
private:
    
public:
    ModelFactory();
    ~ModelFactory();
    virtual User* createUser(std::unordered_map<std::string, std::string> auxMap) = 0;
};

#endif // MODELFACTORY.HPP