#ifndef FacadeController_HPP
#define FacadeController_HPP

#include "../model/User.hpp"
#include "../model/Bike.hpp"
#include "../../include/controller/UserController.hpp"
#include "../../include/controller/BikeController.hpp"
#include "../../include/controller/ClientController.hpp"

#include <string>
#include <iostream>
#include <vector>

class FacadeController {
protected:
private:
    UserController* userController_;
    ManageBike* manageBike_;
    ClientController* clientController_;
    static FacadeController* instance;

public:
    FacadeController();
    static FacadeController* getInstance();

    void registBike();
    void registerUser();
    void registerClient();
    void setEntityRegister(const User& user);
    void editEntity();
    void deleteEntity();
    void findEntity();
    void listAllBikes();
    void listAllUsers();
    void listAllClients();
    void getQtdUserRegister();
    void setEntityRegister(const Bike& bike);
    void editEntity(const Bike& bike);
    void deleteEntity(const Bike& bike);
    void findEntity(const Bike& bike);

};
#endif //  FacadeController_HPP