#include "../../include/validator/UserValidator.hpp"
#include "../../include/LoginInvalidoException.hpp"
#include "../../include/SenhaInvalidaException.hpp"
#include <algorithm>

#define TAMANHO_MAXIMO_LOGIN 12
#define TAMANHO_MINIMO_SENHA 8
#define TAMANHO_MAXIMO_SENHA 20
#define QTD_MINIMA_NUMEROS 2

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
    else if (std::find_if(usr.begin(), usr.end(), (int(*)(int))std::isdigit) != usr.end()) {
        std::cout << "O login não pode conter números!" << std::endl;
        throw InvalidLoginException();
    }
}

int UserValidator::countNumbers(std::string pass) {
    size_t count = 0;

    for (std::string::size_type pos = 0; (pos = pass.find_first_of("0123456789", pos)) != std::string::npos; ++pos) {
        count++;
    }

    return count;
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
    else if (countNumbers(pass) < QTD_MINIMA_NUMEROS) {
        std::cout << "A senha deve conter pelo menos 2(dois) números" << std::endl;
        throw InvalidPasswordException();
    }
}
