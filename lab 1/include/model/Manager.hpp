#ifndef MANAGER_HPP
#define MANAGER_HPP

#include "User.hpp"
#include "Bike.hpp"

class Manager : public User {
private:
    std::string cnpjCode;
    std::string establishment;
public:
    Manager();
    Manager(std::string login, std::string password);
    Manager(std::string login, std::string password, std::string establishment, std::string cnpjCode);
    virtual ~Manager();
    void setCnpjCode(std::string cnpjCode);
    std::string getCnpjCode();
    void setEstablishment(std::string establishment);
    std::string getEstablishment();
};

#endif // MANAGER_HPP