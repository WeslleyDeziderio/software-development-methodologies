#ifndef MANAGEUSER_HPP
#define MANAGEUSER_HPP

#include <string>
#include <iostream>

class ManageUser {
protected:
    std::string usr;
    std::string pass;
public:
    ManageUser();
    ~ManageUser();
    void registerUser();
    void editUser();
    void findUser();
    void listAllUsers();
    void deleteUser();
    void userMenu();

};

#endif //MANAGEUSER_HPP