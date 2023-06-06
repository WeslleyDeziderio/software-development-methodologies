#ifndef FacadeController_HPP
#define FacadeController_HPP

#include "../model/User.hpp"
#include "../model/Bike.hpp"
#include "../../include/controller/UserController.hpp"
#include "../../include/controller/BikeController.hpp"
#include "../../include/controller/ClientController.hpp"
#include "../../include/controller/ManagerController.hpp"

#include <string>
#include <iostream>
#include <vector>

class FacadeController {
protected:
    UserController* userController_;
    BikeController* bikeController_;
    ClientController* clientController_;
    ManagerController* managerController_;
    static FacadeController* instance;
private:

public:
    FacadeController();
    static FacadeController* getInstance();

    void registerBike();
    void registerManager(std::unordered_map<std::string, std::string> auxMap);

    void registerClient(std::unordered_map<std::string, std::string> auxMap);
    void editClient(std::string login, std::string newLogin, std::string newPassword, std::string newPlan);

    void deleteClient(std::string login);
    void deleteManager(std::string login);

    void findClient(std::string login);
    void findManager(std::string login);

    void listAllBikes();
    void listAllUsers();
    
};
#endif //  FacadeController_HPP