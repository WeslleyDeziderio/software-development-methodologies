#ifndef CLIENTVIEW_HPP
#define CLIENTVIEW_HPP

#include "../../include/view/UserViewTemplate.hpp"


class ClientView : public UserViewTemplate{
public:
    void showMenu() override;
    void registrationMenu() override;
    void editMenu() override;
};


#endif