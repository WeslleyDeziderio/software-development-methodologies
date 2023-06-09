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
    void saveUsers() override;
    void loadUsers() override;
    void updateEstablishment(std::string login, std::string newEstablishment);
    void updateCnpj(std::string login, std::string newCnpj);
    void listAllManagers();
    void listAllManagersOrdered();
};

#endif // MANAGERCONTROLLER_HPP