#ifndef I_USER_VALIDATOR_HPP
#define I_USER_VALIDATOR_HPP

#include <string>

class IUserValidator {
public:
    virtual ~IUserValidator();
    virtual bool validateUser(const std::string& login, const std::string password) const = 0;
};

#endif 
