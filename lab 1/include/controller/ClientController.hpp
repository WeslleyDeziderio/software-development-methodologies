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
    void editPlan(std::string login, std::string newPlan);
    void listAllClients();
    
};

#endif