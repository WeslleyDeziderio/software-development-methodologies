#include "../../include/view/UserView.hpp"
#include "../../include/controller/UserController.hpp"

UserController userController;


UserController::UserController() {}

UserController::~UserController() {}

void UserController::registerUser() {
    std::string usrLogin;
    std::string usrPass;

    std::cout << "Insira seu login: ";
    std::cin >> usrLogin;

    std::cout << "Insira sua senha: ";
    std::cin >> usrPass;
    
    // User a(usrLogin, usrPass);
    User* a = new User(usrLogin, usrPass);
    try {
        a->validateUsername(a->getLogin());
    }
    catch (InvalidLoginException& e) {
        std::cerr << "Erro: " << e.what() << std::endl;
        system("read -p '\n\n\n\nAperte Enter para continuar' var");

    }
    catch (...) {
        std::cerr << "Erro: " << std::endl;
        system("read -p '\n\n\n\nAperte Enter para continuar' var");

    }

    try {
        a->validatePassword(a->getPassword());
        userController.setUserRegister(a);
    }
    catch (InvalidPasswordException& e) {
        std::cerr << "Erro: " << e.what() << std::endl;
        system("read -p '\n\n\n\nAperte Enter para continuar' var");

    }
    catch (...) {
        std::cerr << "Erro: " << std::endl;
        system("read -p '\n\n\n\nAperte Enter para continuar' var");

    }
}

void UserController::setUserRegister(User* a) {
    this->usersList.push_back(a);
}

void UserController::getQtdUserRegister() {
    unsigned long int qtd = this->usersList.size();

    if (qtd == 0) {
        std::cout << "Não há usuários cadastrados!" << std::endl;
    }

    for (unsigned long int i = 0; i < qtd; i++) {
        std::cout << this->usersList[i]->getLogin() << std::endl;
    }
}

void UserController::listAllUsers() {
    userController.getQtdUserRegister();
}


void UserController::deleteUser() {
    this->usersList.pop_back();
}

void UserController::findUser() {}

void UserController::editUser() {}
