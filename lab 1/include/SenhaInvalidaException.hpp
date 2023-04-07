#ifndef INVALIDPASSWORDEXCEPTION_HPP
#define INVALIDPASSWORDEXCEPTION_HPP

#include <string>
#include <exception>

class InvalidPasswordException : public std::exception{
protected:
    std::string InvalidPasswordMessage = "Senha Inválida.";
public:
    InvalidPasswordException();
    ~InvalidPasswordException();
    virtual std::string what();
};


#endif // INVALIDPASSWORDEXCEPTION_HPP