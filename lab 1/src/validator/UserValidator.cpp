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
        std::cout << "O login deve possuir até 20(vinte) caracteres!" << std::endl;
        throw InvalidLoginException();
    } 
    else if (usr.empty()) {
        std::cout << "O login não pode ser vazio!" << std::endl;
        throw InvalidLoginException();
    }
}

void UserValidator::passValidator(std::string pass) {
   if (pass.length() < TAMANHO_MINIMO_SENHA) {
        std::cout << "A senha deve possuir pelo menos 8(oito) caracteres!" << std::endl;
        throw InvalidPasswordException();
   }
   else if (pass.length() > TAMANHO_MAXIMO_SENHA) {
        std::cout << "A senha deve possuir até 12(doze) caracteres!" << std::endl;
        throw InvalidPasswordException();
   }
}