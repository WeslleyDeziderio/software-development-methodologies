#ifndef USER_HPP
#define USER_HPP

#include <string>
#include "../include/validator/UserValidator.hpp"
class User : public UserValidator {
private:
    std::string login;
    std::string password;
public:
    User();
    User(std::string login, std::string password);
    ~User();
    void setLogin(std::string login);
    std::string getLogin();
    void setPassword(std::string password);
    std::string getPassword();
};

#endif // USER_HPP
