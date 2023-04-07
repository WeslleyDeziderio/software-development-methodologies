#ifndef USERVALIDATOR_HPP
#define USERVALIDATOR_HPP

#include <string>

class UserValidator {
protected:
    std::string usr;
    std::string pass;
public:
    UserValidator();
    ~UserValidator();
    void nameValidator(std::string usr);
    void passValidator(std::string pass);
};

#endif // USERVALIDATOR_HPP