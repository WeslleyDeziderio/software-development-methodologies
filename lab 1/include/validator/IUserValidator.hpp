#ifndef I_USER_VALIDATOR_HPP
#define I_USER_VALIDATOR_HPP

#include <string>
#include "../../include/exception/LoginInvalidoException.hpp"
#include "../../include/exception/SenhaInvalidaException.hpp"
class IUserValidator {
public:
    IUserValidator();
    virtual ~IUserValidator();
    virtual void validateUsername(const std::string& usr) = 0;
    virtual void validatePassword(const std::string& pass) = 0;
    virtual int countNumbers(const std::string& pass) = 0;
};

#endif //  I_USER_VALIDATOR_HPP 
