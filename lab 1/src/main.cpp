#include <iostream>
#include "../include/User.hpp"
#include "../include/validator/UserValidator.hpp"
#include "../include/exception/LoginInvalidoException.hpp"
#include "../include/exception/SenhaInvalidaException.hpp"
#include "../include/ManageUser.hpp"

int main(void) {
    ManageUser manageUser;
    manageUser.userMenu();

    return 0;
}
