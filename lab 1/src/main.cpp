#include <iostream>
#include "../include/model/User.hpp"
#include "../include/validator/UserValidator.hpp"
#include "../include/exception/LoginInvalidoException.hpp"
#include "../include/exception/SenhaInvalidaException.hpp"
#include "../include/controller/ManageUser.hpp"

int main(void) {
    ManageUser manageUser;
    manageUser.userMenu();

    return 0;
}
