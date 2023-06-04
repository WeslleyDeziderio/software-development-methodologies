#include "../../include/factories/ModelFactory.hpp"

ModelFactory::ModelFactory() {
}

ModelFactory::~ModelFactory() {
}

User* ModelFactory::createUser(std::unordered_map<std::string, std::string> auxMap) {
    User* user = nullptr;
    if (auxMap.count("establishment") > 0) {
        user = new Manager(auxMap["login"], auxMap["password"]);
    } else{
        user = new Client(auxMap["login"], auxMap["password"], auxMap["plan"]);
    }
    return user;
}