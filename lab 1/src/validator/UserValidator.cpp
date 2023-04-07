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
    try {
        usr.length() > TAMANHO_MAXIMO_LOGIN;
    } catch (InvalidLoginException e) {
        std::cerr << "Login com mais de 12 caracteres!" << e.what() << std::endl;
    }

    try {
        usr.empty();
    } catch (InvalidLoginException e) {
        std::cerr << "Login Vazio!" << e.what() << std::endl;
    }
}

void UserValidator::passValidator(std::string pass) {
    try {
        int(pass.length()) > TAMANHO_MAXIMO_SENHA;
    } catch (InvalidPasswordException e) {
        std::cerr << "Senha com mais de 20 caracteres!" << e.what() << std::endl;
    }

    try {
        int(pass.length()) < TAMANHO_MINIMO_SENHA;
    } catch (InvalidPasswordException e) {
        std::cerr << "Senha com menos de 8 caracteres!" << e.what() << std::endl;
    }
}