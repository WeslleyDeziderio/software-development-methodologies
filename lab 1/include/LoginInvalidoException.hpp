#ifndef INVALIDLOGINEXCEPTION_HPP
#define INVALIDLOGINEXCEPTION_HPP

#include <string>
#include <exception>

class InvalidLoginException : public std::exception {
protected:
    std::string InvalidLoginMessage = "Login Inválido!\n";
public:
    InvalidLoginException() throw();
    ~InvalidLoginException() throw();
    virtual std::string what();
};

#endif // INVALIDLOGINEXCEPTION_HPP
