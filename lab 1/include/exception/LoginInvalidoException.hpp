#ifndef INVALIDLOGINEXCEPTION_HPP
#define INVALIDLOGINEXCEPTION_HPP

#include <string>
#include <exception>
class LoginException : public std::exception {
public:
    virtual std::string what() = 0;
};

class InvalidLoginException : LoginException {
protected:
    std::string InvalidLoginMessage = "Login Inválido!\n";
public:
    InvalidLoginException() throw();
    ~InvalidLoginException() throw();
    virtual std::string what() override;
};

#endif // INVALIDLOGINEXCEPTION_HPP
