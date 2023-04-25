#include "../../include/validator/UserValidator.hpp"
#include "../../include/validator/IUserValidator.hpp"
#include "../../include/exception/LoginInvalidoException.hpp"
#include "../../include/exception/SenhaInvalidaException.hpp"
#include <algorithm>

#define TAMANHO_MAXIMO_LOGIN 12
#define TAMANHO_MINIMO_SENHA 8
#define TAMANHO_MAXIMO_SENHA 20
#define QTD_MINIMA_NUMEROS 2

UserValidator::UserValidator() {}

UserValidator::~UserValidator() {}

void UserValidator::validateUsername(std::string usr) {
    if (static_cast<int>(usr.length()) > TAMANHO_MAXIMO_LOGIN) {
        std::cout << "\nO login deve possuir até 20(vinte) caracteres!" << std::endl;
        throw InvalidLoginException();
    } else if (usr.empty()) {
        std::cout << "\nO login não pode ser vazio!" << std::endl;
        throw InvalidLoginException();
    } else if (std::find_if(usr.begin(), usr.end(), (int(*)(int))std::isdigit) != usr.end()) {
        std::cout << "\nO login não pode conter números!" << std::endl;
        throw InvalidLoginException();
    }
}

int UserValidator::countNumbers(std::string pass) {
    size_t count = 0;

    for (char c : pass) {
        if (isdigit(c)) {
            count++;
        }
    }

    return count;
}

void UserValidator::validatePassword(std::string pass) {
    if (pass.length() < TAMANHO_MINIMO_SENHA) {
        std::cout << "\nA senha deve possuir pelo menos 8(oito) caracteres!" << std::endl;
        throw InvalidPasswordException();
    }
    else if (pass.length() > TAMANHO_MAXIMO_SENHA) {
        std::cout << "\nA senha deve possuir até 12(doze) caracteres!" << std::endl;
        throw InvalidPasswordException();
    }
    else if (countNumbers(pass) < QTD_MINIMA_NUMEROS) {
        std::cout << "\nA senha deve conter pelo menos 2(dois) números!" << std::endl;
        throw InvalidPasswordException();
    }
}
