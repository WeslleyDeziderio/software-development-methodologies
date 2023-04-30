#include <iostream>
#include "../include/User.hpp"
#include "../include/validator/UserValidator.hpp"
<<<<<<< HEAD
#include "../include/exception/LoginInvalidoException.hpp"
#include "../include/exception/SenhaInvalidaException.hpp"
#include "../include/ManageUser.hpp"

int main(void) {
    ManageUser manageUser;
    manageUser.userMenu();

=======
#include "../include/LoginInvalidoException.hpp"
#include "../include/SenhaInvalidaException.hpp"
#include "../include/ManageUser.hpp"

int main(void) {
    ManageUser *menu = new ManageUser();
    menu->userMenu();
    
    delete menu;
>>>>>>> 4673e5820df6a71f0f08e72fe19a465a5f5ddec2
    return 0;
}
