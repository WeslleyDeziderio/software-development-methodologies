#include <iostream>
#include "../include/User.hpp"
#include "../include/validator/UserValidator.hpp"
#include "../include/LoginInvalidoException.hpp"
#include "../include/SenhaInvalidaException.hpp"
#include "../include/ManageUser.hpp"

int main(void) {
    ManageUser *menu = new ManageUser();
    menu->userMenu();
    
    delete menu;
    return 0;
}
