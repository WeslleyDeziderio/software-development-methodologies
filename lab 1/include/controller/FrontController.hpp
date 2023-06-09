#ifndef FrontController_HPP
#define FrontController_HPP

#include "../model/User.hpp"
#include "../model/Bike.hpp"
#include "../../include/controller/UserController.hpp"
#include "../../include/controller/BikeController.hpp"
#include "../../include/controller/ClientController.hpp"
#include "../../include/controller/ManagerController.hpp"

#include <string>
#include <iostream>
#include <vector>

class FrontController {
protected:
    BikeController* bikeController_;
    ClientController* clientController_;
    ManagerController* managerController_;
    static FrontController* instance;
private:

public:
    FrontController();
    static FrontController* getInstance();

    void registerBike();
    void registerManager(std::unordered_map<std::string, std::string> auxMap);
    void registerClient(std::unordered_map<std::string, std::string> auxMap);

    void deleteClient(std::string login);
    void deleteManager(std::string login);

    void findClient(std::string login);
    void findManager(std::string login);

    void listAllClients();
    void listAllManagers();

    void saveClients();
    void saveManagers();

    void updateManagersLogin(std::string login, std::string newLogin);
    void updateManagersPassword(std::string login, std::string newPassword);
    void updateManagersEstablishment(std::string login, std::string newEstablishment);
    void updateManagersCnpj(std::string login, std::string newCnpj);

    void updateClientsLogin(std::string login, std::string newLogin);
    void updateClientsPassword(std::string login, std::string newPassword);
    void updateClientsPlan(std::string login, std::string newPlan);
    
};
#endif //  FrontController_HPP