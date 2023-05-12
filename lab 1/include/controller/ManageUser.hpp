#ifndef MANAGEUSER_HPP
#define MANAGEUSER_HPP

#include "../../include/model/User.hpp"

#include <string>
#include <iostream>
#include <vector>

class ManageUser : public User {
protected:
    std::vector<User> usersList;
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
