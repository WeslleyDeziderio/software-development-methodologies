#ifndef MANAGERVIEW_HPP
#define MANAGERVIEW_HPP

#include "../../include/view/UserViewTemplate.hpp"

class ManagerView : public UserViewTemplate{
public:
    void showMenu() override;
    void editMenu() override;
    void registrationMenu() override;
    void deleteMenu() override;
    
};

#endif