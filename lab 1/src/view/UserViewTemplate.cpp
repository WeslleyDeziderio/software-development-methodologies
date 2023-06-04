#include "../../include/view/UserViewTemplate.hpp"


inline void UserViewTemplate::showMenu(){

}

void UserViewTemplate::registrationMenu(){

}

void UserViewTemplate::editMenu(){

}

void UserViewTemplate::deleteMenu(){
    system("clear");
    std::string client_name;
    std::cout << "Which client do you want to delete?" << std::endl;
    std::cin >> client_name;

    this->facade_instance.deleteUser(client_name);
}

void UserViewTemplate::findMenu(){
    system("clear");
    std::string client_name;
    std::cout << "Which client do you want to show?" << std::endl;
    std::cin >> client_name;

    this->facade_instance.findUser(client_name);

}

void UserViewTemplate::listAllMenu(){
    system("clear");
    this->facade_instance.listAllUsers();
}