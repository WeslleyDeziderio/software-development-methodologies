#ifndef CLIENTCONTROLLER_HPP
#define CLIENTCONTROLLER_HPP
#include <vector>
#include "../model/Client.hpp"
#include "UserController.hpp"

class ClientController : public UserController{
private:
    std::vector<Client> clientsList;
protected:

public:
    ClientController();
    virtual ~ClientController();
    void editClient();
    void editPlan();
    // void setClientRegister(Client aux);
    void registerUser() override;
    void listAllUsers() override;
    // void getQtdUserRegister() override;
    // void deleteUser() override;
    // void findUser() override;



};

#endif