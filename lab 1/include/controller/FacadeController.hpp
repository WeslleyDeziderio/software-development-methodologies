#ifndef FacadeController_HPP
#define FacadeController_HPP

#include "../model/User.hpp"
#include "../model/Bike.hpp"
#include <string>
#include <iostream>
#include <vector>

class FacadeController {
protected:
    std::vector<User> usersList;
    std::vector<Bike> bikesList;   
private:
    static FacadeController* instance;

    FacadeController();

public:
    static FacadeController* getInstance();

    // Métodos para CRUD de usuários
    void registerUser();
    void setEntityRegister(const User& user);
    void editEntity();
    void deleteEntity();
    void findEntity();
    void listAllUsers();
    void getQtdUserRegister();
    // Métodos para CRUD de bicicletas
    void setEntityRegister(const Bike& bike);
    void editEntity(const Bike& bike);
    void deleteEntity(const Bike& bike);
    void findEntity(const Bike& bike);
    void listAllBikes();

};
#endif //  FacadeController_HPP