#ifndef CLIENTCONTROLLER_HPP
#define CLIENTCONTROLLER_HPP
#include <vector>
#include "../model/Client.hpp"
#include "UserController.hpp"

class ClientController : public UserController{
private:

protected:

public:
    ClientController();
    virtual ~ClientController();
    void editPlan();

    void editUser() override;
    void deleteUser() override;
    void findUser() override;
    void listAllUsers() override;
    void registerUser() override;

};

#endif