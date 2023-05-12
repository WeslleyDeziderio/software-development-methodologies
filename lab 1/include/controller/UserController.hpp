#ifndef USERCONTROLLER_HPP
#define USERCONTROLLER_HPP

#include "../../include/model/User.hpp"

#include <string>
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <cstdlib> 

class UserController : public User {
protected:
    std::vector<User> usersList;
public:
    UserController();
    virtual ~UserController();
    void registerUser();
    void setUserRegister(User aux);
    void getQtdUserRegister();
    void editUser();
    void findUser();
    void listAllUsers();
    void deleteUser();
    void userMenu();
};

#endif //  USERCONTROLLER_HPP
