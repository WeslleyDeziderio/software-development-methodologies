#ifndef MANAGEUSER_HPP
#define MANAGEUSER_HPP
#include "../include/User.hpp"

#include <string>
#include <iostream>
#include <vector>

class ManageUser {
protected:
    std::vector<User> listOfUsers;
public:
    ManageUser();
    ~ManageUser();
    void registerUser();
    void setUserRegister(User aux);
    void getQtdUserRegister();
    void editUser();
    void findUser();
    void listAllUsers();
    void deleteUser();
    void userMenu();

};

#endif //MANAGEUSER_HPP