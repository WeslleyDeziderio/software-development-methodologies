#include <iostream>
#include "../include/User.hpp"
#include "../include/validator/UserValidator.hpp"
#include "../include/exception/LoginInvalidoException.hpp"
#include "../include/exception/SenhaInvalidaException.hpp"
#include "../include/ManageUser.hpp"

int main(void) {
    // User user1;
    // std::string userLogin;
    // std::string userPassword;
    //
    // std::cout << "Insira o login: ";
    // std::cin >> userLogin;
    // user1.setLogin(userLogin);
    //
    // std::cout << "Insira a senha: ";
    // std::cin >> userPassword;
    // user1.setPassword(userPassword);
    //
    // try {
    //     user1.nameValidator(user1.getLogin());
    // }
    //
    // catch (InvalidLoginException& e) {
    //     std::cerr << "Erro: " << e.what() << std::endl;
    // }
    // catch (...) {
    //     std::cerr << "Erro: " << std::endl;
    // }
    //
    // try {
    //     user1.passValidator(user1.getPassword());
    // }
    //
    // catch (InvalidPasswordException& e) {
    //     std::cerr << "Erro: " << e.what() << std::endl;
    // }
    //  
    ManageUser manageUser;
    manageUser.userMenu();

    return 0;
}
