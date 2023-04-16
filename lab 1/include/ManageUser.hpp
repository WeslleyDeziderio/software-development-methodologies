#ifndef MANAGEUSER_HPP
#define MANAGEUSER_HPP

#include <string>
#include <iostream>
#include <vector>
/* #include <hash> */
#include "../include/User.hpp"

class ManageUser {
protected:
    std::vector<User> usersList;
public:
    ManageUser();
    ~ManageUser();
    void registerUser();
    void editUser();
    void findUser();
    void listAllUsers();
    void deleteUser();
    void userMenu();
    void setUserRegister(User a);
    void getQtdUserRegister();
};

#endif //MANAGEUSER_HPP
