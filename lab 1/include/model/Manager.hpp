#ifndef MANAGER_HPP
#define MANAGER_HPP

#include "User.hpp"
#include "Bike.hpp"

class Manager : public User {
private:
    std::string pfjCode;
    std::string establishment;
public:
    Manager();
    virtual ~Manager();
    void setPfjCode(std::string pfjCode);
    std::string getPfjCode();
    void setEstablishment(std::string establishment);
    std::string getEstablishment();
};

#endif // MANAGER_HPP