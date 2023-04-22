#ifndef USERVALIDATOR_HPP
#define USERVALIDATOR_HPP

#include <string>
#include <iostream>
#include "../../include/exception/LoginInvalidoException.hpp"
#include "../../include/exception/SenhaInvalidaException.hpp"

class UserValidator : public InvalidLoginException, InvalidPasswordException {
protected:
    std::string usr;
    std::string pass;
public:
    UserValidator();
    virtual ~UserValidator();
    virtual void validateUsername(std::string usr);
    virtual void validatePassword(std::string pass);
    int countNumbers(std::string pass);
};

#endif // USERVALIDATOR_HPP
