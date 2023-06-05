#ifndef MANAGERCONTROLLER_HPP
#define MANAGERCONTROLLER_HPP

#include "../../include/model/Manager.hpp"
#include "UserController.hpp"

class ManagerController : public UserController{
public:
    ManagerController();
    ~ManagerController();
    void registerUser(std::unordered_map<std::string, std::string> auxMap) override;
    void findUser(std::string login) override;
    void createEstablisment();
    void retrieveEstablishment();
    void deleteEstablisment();
    void updateEstablishment();
    void listAllManagers();
};

#endif // MANAGERCONTROLLER_HPP