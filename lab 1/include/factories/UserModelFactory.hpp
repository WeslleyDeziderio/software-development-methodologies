#ifndef USERMODELFACTORY_HPP
#define USERMODELFACTORY_HPP

#include "../model/User.hpp"

class UserModelFactory {
private:
    
public:
    UserModelFactory();
    ~UserModelFactory();
    virtual User* createUser(std::unordered_map<std::string, std::string> auxMap) = 0;
};

#endif // USERMODELFACTORY.HPP