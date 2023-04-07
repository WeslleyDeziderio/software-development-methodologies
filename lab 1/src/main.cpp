#include <iostream>
#include "../include/User.hpp"
#include "../include/validator/UserValidator.hpp"
#include "../include/LoginInvalidoException.hpp"
#include "../include/SenhaInvalidaException.hpp"

int main(void) {
    User *user = new User("usuario", "usuario321");

    std::cout << user->getLogin() << std::endl;
    std::cout << user->getPassword() << std::endl;
    
    // try {
    //     user->nameValidator("usu");
    // } catch (InvalidLoginException e) {
    //     std::cerr << "Erro: " << e.what() << std::endl;
    // }

    delete user;

    return 0;
}
