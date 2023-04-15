#include "../../include/validator/UserValidator.hpp"
#include "../../include/LoginInvalidoException.hpp"
#include "../../include/SenhaInvalidaException.hpp"

#define TAMANHO_MAXIMO_LOGIN 12
#define TAMANHO_MINIMO_SENHA 8
#define TAMANHO_MAXIMO_SENHA 20

UserValidator::UserValidator() {
}

UserValidator::~UserValidator() {
}

void UserValidator::nameValidator(std::string usr) {
    if (int(usr.length()) > TAMANHO_MAXIMO_LOGIN) {
        throw InvalidLoginException();
    } 
    else if (usr.empty()) {
        throw InvalidLoginException();
    }
}

void UserValidator::passValidator(std::string pass) {
   if (pass.length() < TAMANHO_MINIMO_SENHA) {
        std::cout << "1" << std::endl;
        throw InvalidPasswordException();
   }
   else if (pass.length() > TAMANHO_MAXIMO_SENHA) {
        std::cout << "2" << std::endl;
        throw InvalidPasswordException();
   }
}