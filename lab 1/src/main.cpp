#include <iostream>
#include "../include/User.hpp"
#include "../include/validator/UserValidator.hpp"
#include "../include/LoginInvalidoException.hpp"
#include "../include/SenhaInvalidaException.hpp"

int main(void) {
    User *user = new User("usuario", "usuario123");

    std::cout << user->getLogin() << std::endl;
    std::cout << user->getPassword() << std::endl;
    
    delete user;

    return 0;
}
