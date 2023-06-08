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
    ClientController* clientController_;
    ManagerController* managerController_;
private:

public:
    FacadeController();

    void listAllBikes();
    void listAllUsers();
    void listAllUsersOrdered();
    
};
#endif //  FacadeController_HPP