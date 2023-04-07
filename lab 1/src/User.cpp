#include "../include/User.hpp"

User::User() {
    std::string login = "";
    std::string password = "";
}

User::User(std::string login, std::string password) {
    this->login = login;
    this->password = password;
}

User::~User() {
}

void User::setLogin(std::string login) {
    this->login = login;
}

std::string User::getLogin() {
    return login;
}

void User::setPassword(std::string password) {
    this->password = password;
}

std::string User::getPassword() {
    return password;
}