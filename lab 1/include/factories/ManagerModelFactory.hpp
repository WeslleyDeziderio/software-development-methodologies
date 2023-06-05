#ifndef MANAGERMODELFACTORY_HPP
#define MANAGERMODELFACTORY_HPP

#include "../../include/model/Manager.hpp"
#include "ModelFactory.hpp"

class ManagerModelFactory : public ModelFactory {
private:
public:
    ManagerModelFactory();
    ~ManagerModelFactory();
    User* createUser(std::unordered_map<std::string, std::string> auxMap) override;
};

#endif // MANAGERMODELFACTORY.HPP