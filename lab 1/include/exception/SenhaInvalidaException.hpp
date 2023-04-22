#ifndef INVALIDPASSWORDEXCEPTION_HPP
#define INVALIDPASSWORDEXCEPTION_HPP

#include <string>
#include <exception>

class PasswordException : public std::exception {
public:
    virtual std::string what() = 0;
};

class InvalidPasswordException : public PasswordException {
protected:
    std::string InvalidPasswordMessage = "Senha Inválida!\n";
public:
    InvalidPasswordException() throw();
    ~InvalidPasswordException() throw();
    virtual std::string what() override;
};

#endif // INVALIDPASSWORDEXCEPTION_HPP
