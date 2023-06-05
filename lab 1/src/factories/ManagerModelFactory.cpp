#include "../../include/factories/ManagerModelFactory.hpp"

ManagerModelFactory::ManagerModelFactory() {
}

ManagerModelFactory::~ManagerModelFactory() {
}

User* ManagerModelFactory::createUser(std::unordered_map<std::string, std::string> auxMap) {
    User* user = nullptr;
    user = new Manager(auxMap["login"], auxMap["password"], auxMap["establishment"], auxMap["pfjCode"]);
    
    return user;
}