#include <iostream>
#include "../include/User.hpp"
#include "../include/UserValidator.hpp"
#include "../include/LoginInvalidoException.hpp"
#include "../include/SenhaInvalidaException.hpp"

int main(void) {
    User *user = new User("weslley", "weslley123");
    std::cout << user->getLogin() << std::endl;
    std::cout << user->getPassword() << std::endl;

    std::cout << "Hello, World!" << std::endl;

    delete user;

    return 0;
}
