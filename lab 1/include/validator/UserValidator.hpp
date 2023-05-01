#ifndef USERVALIDATOR_HPP
#define USERVALIDATOR_HPP

#include <string>
#include <iostream>
#include "../../include/exception/LoginInvalidoException.hpp"
#include "../../include/exception/SenhaInvalidaException.hpp"
#include "../../include/validator/IUserValidator.hpp"
class UserValidator : public InvalidLoginException, public InvalidPasswordException {
protected:
    std::string usr;
    std::string pass;
public:
    UserValidator();
    virtual ~UserValidator();
    void validateUsername(std::string usr);
    void validatePassword(std::string pass);
    int countNumbers(std::string pass);
};

#endif // USERVALIDATOR_HPP
