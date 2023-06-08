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
    void registerUser(std::unordered_map<std::string, std::string> auxMap) override;
    void findUser(std::string login) override;
    void listAllClients();
    void saveUsers() override;
    void loadUsers() override;
    
};

#endif