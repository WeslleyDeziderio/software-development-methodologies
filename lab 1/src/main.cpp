#include <iostream>
#include "../include/User.hpp"
#include "../include/validator/UserValidator.hpp"
#include "../include/LoginInvalidoException.hpp"
#include "../include/SenhaInvalidaException.hpp"

int main(void) {
    User *user = new User("usuario", "usuario321");
    User user1;

    std::cout << user->getLogin() << std::endl;
    std::cout << user->getPassword() << std::endl;

    user1.passValidator("1231111111111111111111111111");
    user1.nameValidator("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");

    delete user;

    return 0;
}
