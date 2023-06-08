#include <iostream>
#include "../include/model/User.hpp"
#include "../include/utils/UserValidator.hpp"
#include "../include/exception/LoginInvalidoException.hpp"
#include "../include/exception/SenhaInvalidaException.hpp"
#include "../include/view/UserViewTemplate.hpp"
#include "../include/view/ClientView.hpp"
#include "../include/view/ManagerView.hpp"
#include "../include/controller/UserController.hpp"
#include "../include/controller/BikeController.hpp"


int main(void) {
    
    // ClientView clientMenu;
    // clientMenu.showMenu();

    ManagerView managerMenu;
    managerMenu.showMenu();

    return 0;
}
