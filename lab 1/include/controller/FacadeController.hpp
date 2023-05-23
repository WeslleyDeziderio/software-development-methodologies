#ifndef FacadeController_HPP
#define FacadeController_HPP

#include "../model/User.hpp"
#include "../model/Bike.hpp"
#include "../../include/controller/UserController.hpp"
#include <string>
#include <iostream>
#include <vector>

class FacadeController {
protected:
private:
    UserController* userController_;
    static FacadeController* instance;

public:
    FacadeController();
    static FacadeController* getInstance();


    void registerUser();
    void setEntityRegister(const User& user);
    void editEntity();
    void deleteEntity();
    void findEntity();
    void listAllUsers();
    void getQtdUserRegister();
    void setEntityRegister(const Bike& bike);
    void editEntity(const Bike& bike);
    void deleteEntity(const Bike& bike);
    void findEntity(const Bike& bike);
    void listAllBikes();

};
#endif //  FacadeController_HPP