#ifndef USERVIEWTEMPLATE_HPP
#define USERVIEWTEMPLATE_HPP

#include "../../include/controller/UserController.hpp"
#include "../../include/controller/FrontController.hpp"

class UserViewTemplate{
protected:
    FrontController front_instance;
public:
    virtual void showMenu();
    virtual void registrationMenu();
    virtual void editMenu();
    virtual void deleteMenu();
    virtual void findMenu();
    virtual void listAllMenu();
    virtual void saveMenu();
};

#endif 
