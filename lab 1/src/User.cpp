#include "../include/User.hpp"
#include "../include/validator/UserValidator.hpp"

User::User(std::string login, std::string password) {
    setLogin(login);
    setPassword(password);
}

User::~User() {}

void User::setLogin(const std::string& login) {
    this->login = login;
}

std::string User::getLogin() const {
    return login;
}

void User::setPassword(const std::string& password) {
    this->password = password;
}

std::string User::getPassword() const {
    return password;
}
