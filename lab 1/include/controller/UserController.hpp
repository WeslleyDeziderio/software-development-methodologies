#ifndef USERCONTROLLER_HPP
#define USERCONTROLLER_HPP

#include "../../include/model/User.hpp"

#include <string>
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <cstdlib>
#include <unordered_map>

class User;

class UserController {
protected:
    std::unordered_map<std::string, User*> usersMap;

public:
    UserController();
    virtual ~UserController();
    virtual void registerUser(std::unordered_map<std::string, std::string> auxMap);
    virtual void editUser(std::string login, std::string newLogin, std::string newPassword);
    virtual void editLogin(std::string login, std::string newLogin);
    virtual void editPassword(std::string login, std::string newPassword);
    virtual void findUser(std::string login);
    virtual void deleteUser(std::string login);
    
};

#endif //  USERCONTROLLER_HPP
