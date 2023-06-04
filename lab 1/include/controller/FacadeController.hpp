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
    UserController* userController_;
    BikeController* bikeController_;
    ClientController* clientController_;
    static FacadeController* instance;
private:

public:
    FacadeController();
    static FacadeController* getInstance();

    void registBike();
    void registerClient(std::unordered_map<std::string, std::string> auxMap);

    void setEntityRegister(const User& user);
    void deleteUser(std::string login);
    void findUser(std::string login);

    void editClient(std::string login, std::string newLogin, std::string newPassword, std::string newPlan);
    void editLogin(std::string login, std::string newLogin);
    void editPassword(std::string login, std::string newPassword);

    void listAllBikes();
    void listAllUsers();
    void listAllClients();

    void setEntityRegister(const Bike& bike);
    void editEntity(const Bike& bike);
    void deleteEntity(const Bike& bike);
    void findEntity(const Bike& bike);

};
#endif //  FacadeController_HPP