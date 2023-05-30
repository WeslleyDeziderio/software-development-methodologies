#ifndef MANAGERCONTROLLER_HPP
#define MANAGERCONTROLLER_HPP

#include "../../include/model/Manager.hpp"
#include "UserController.hpp"

class ManagerController : public UserController{
public:
    ManagerController();
    ~ManagerController();
    void registerUser() override;
    void listAllUsers() override;
    void createEstablisment();
    void retrieveEstablishment();
    void deleteEstablisment();
    void updateEstablishment();
};

#endif // MANAGERCONTROLLER_HPP