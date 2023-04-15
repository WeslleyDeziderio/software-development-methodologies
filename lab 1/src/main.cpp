#include <iostream>
#include "../include/User.hpp"
#include "../include/validator/UserValidator.hpp"
#include "../include/LoginInvalidoException.hpp"
#include "../include/SenhaInvalidaException.hpp"

int main(void) {
    // User *user = new User("usuario", "usuario321");
    User user1;
    std::string userLogin;
    std::string userPassword;

    // std::cout << user->getLogin() << std::endl;
    // std::cout << user->getPassword() << std::endl;

    std::cout << "Insira o login: ";
    std::cin >> userLogin;
    user1.setLogin(userLogin);

    std::cout << "Insira a senha: ";
    std::cin >> userPassword;
    user1.setPassword(userPassword);

    try {
        user1.nameValidator(user1.getLogin());
    }

    catch (InvalidLoginException& e) {
        std::cerr << "Erro: " << e.what() << std::endl;
    }
    catch (...) {
        std::cerr << "Erro: " << std::endl;
    }

    try {
        user1.passValidator(user1.getPassword());
    }

    catch (InvalidPasswordException& e) {
        std::cerr << "Erro: " << e.what() << std::endl;
    }

    // delete user;

    return 0;
}
