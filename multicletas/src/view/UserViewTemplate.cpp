#include "../../include/view/UserViewTemplate.hpp"


inline void UserViewTemplate::showMenu(){

}

void UserViewTemplate::registrationMenu(){

}

void UserViewTemplate::editMenu(){

}

void UserViewTemplate::deleteMenu(){

}

void UserViewTemplate::findMenu(){

}

void UserViewTemplate::listAllMenu(){
    system("clear");
    this->facade_instance.listAllUsers();
}