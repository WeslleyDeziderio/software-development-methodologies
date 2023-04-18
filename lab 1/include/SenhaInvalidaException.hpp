#ifndef INVALIDPASSWORDEXCEPTION_HPP
#define INVALIDPASSWORDEXCEPTION_HPP

#include <string>
#include <exception>

class InvalidPasswordException : public std::exception {
protected:
    std::string InvalidPasswordMessage = "Senha Inválida!\n";
public:
    InvalidPasswordException() throw();
    ~InvalidPasswordException() throw();
    virtual std::string what();
};

#endif // INVALIDPASSWORDEXCEPTION_HPP
