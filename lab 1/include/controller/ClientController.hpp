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
    void findUser(std::string login) override;
    void updatePlan(std::string login, std::string newPlan);
    void listAllClients();
    void listAllClientsOrdered();
    void loadUsers() override;
    void registerUser(std::unordered_map<std::string, std::string> auxMap) override;
    void saveUsers() override;
    
};

#endif