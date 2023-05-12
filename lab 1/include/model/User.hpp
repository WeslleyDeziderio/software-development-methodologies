#ifndef USER_HPP
#define USER_HPP

#include <string>
#include "../../include/utils/UserValidator.hpp"
#include "../../include/utils/IUserValidator.hpp"

class User : public UserValidator {
private:
    std::string login;
    std::string password;
public:
    User();
    User(std::string login, std::string password);
    ~User();
    void setLogin(const std::string& login);
    std::string getLogin() const;
    void setPassword(const std::string& password);
    std::string getPassword() const;
};

#endif //  USER_HPP
