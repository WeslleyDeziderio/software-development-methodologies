#include <iostream>
#include "../include/model/User.hpp"
#include "../include/utils/UserValidator.hpp"
#include "../include/exception/LoginInvalidoException.hpp"
#include "../include/exception/SenhaInvalidaException.hpp"
#include "../include/controller/UserController.hpp"

int main(void) {
    UserController userController;
    userController.userMenu();

    return 0;
}
