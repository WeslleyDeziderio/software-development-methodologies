#ifndef MANAGEUSER_HPP
#define MANAGEUSER_HPP
#include "../include/User.hpp"

#include <string>
#include <iostream>
#include <vector>
<<<<<<< HEAD
/* #include <hash> */
#include "../include/User.hpp"
=======
>>>>>>> 4673e5820df6a71f0f08e72fe19a465a5f5ddec2

class ManageUser : public User {
protected:
<<<<<<< HEAD
    std::vector<User> usersList;
=======
    std::vector<User> listOfUsers;
>>>>>>> 4673e5820df6a71f0f08e72fe19a465a5f5ddec2
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
    void setUserRegister(User a);
    void getQtdUserRegister();
};

#endif //MANAGEUSER_HPP
