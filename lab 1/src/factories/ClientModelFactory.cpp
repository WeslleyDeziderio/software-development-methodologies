#include "../../include/factories/ClientModelFactory.hpp"

ClientModelFactory::ClientModelFactory() {
}

ClientModelFactory::~ClientModelFactory() {
}

User* ClientModelFactory::createUser(std::unordered_map<std::string, std::string> auxMap) {
    
    User* user = nullptr;
    user = new Client(auxMap["login"], auxMap["password"], auxMap["plan"]);

    return user;
}