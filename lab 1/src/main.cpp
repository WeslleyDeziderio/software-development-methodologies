#include <iostream>
#include "../include/model/User.hpp"
#include "../include/utils/UserValidator.hpp"
#include "../include/exception/LoginInvalidoException.hpp"
#include "../include/exception/SenhaInvalidaException.hpp"
// #include "../include/view/UserView.hpp"
#include "view/UserView.cpp"
#include "../include/controller/UserController.hpp"
#include "../include/controller/BikeController.hpp"

int main(void) {
    UserView userMenu;
    userMenu.showMenu();
    UserController userController;

    ManageBike* manageBike = new ManageBike();
    manageBike->registBike("urban");

    return 0;
}
