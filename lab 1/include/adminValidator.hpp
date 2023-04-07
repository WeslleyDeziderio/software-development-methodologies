#ifndef USERVALIDATOR_HPP
#define USERVALIDATOR_HPP

#include <string>

class userValidator {
protected:
    std::string usr;
    std::string pass;
public:
    userValidator();
    ~userValidator();
    void nameValidator(std::string usr);
    void passValidator(std::string pass);
};

#endif // USERVALIDATOR_HPP