#ifndef USERCONTROLLER_HPP
#define USERCONTROLLER_HPP

#include "../../include/model/User.hpp"
#include "../../include/view/UserView.hpp"

#include <string>
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <cstdlib> 

class User;
class UserView;

class UserController {
protected:
    std::vector<User*> usersList;
public:
    UserController();
    virtual ~UserController();
    virtual void registerUser();
    virtual void setUserRegister(User* aux);
    virtual void getQtdUserRegister();
    virtual void editUser();
    virtual void findUser();
    virtual void listAllUsers();
    virtual void deleteUser();
};

#endif //  USERCONTROLLER_HPP
