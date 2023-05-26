#include "../../include/controller/ClientController.hpp"

ClientController clientController;

ClientController::ClientController(){
}

ClientController::~ClientController(){
}

void ClientController::editClient(){

    std::string client_name;
    std::cout << "Which client do you want to edit?" << std::endl;
    std::cin >> client_name;

    for(int i = 0; i < clientsList.size(); i++){

    }
}

void ClientController::registerUser(){
    std::string usrLogin;
    std::string usrPass;

    std::cout << "Insira seu login: ";
    std::cin >> usrLogin;

    std::cout << "Insira sua senha: ";
    std::cin >> usrPass;
    
    Client a(usrLogin, usrPass);
    try {
        a.validateUsername(a.getLogin());
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
        a.validatePassword(a.getPassword());
        clientController.setClientRegister(a);
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

void ClientController::setClientRegister(Client aux) {
    this->clientsList.push_back(aux);
}

void ClientController::getQtdUserRegister() {
    unsigned long int qtd = this->clientsList.size();

    if (qtd == 0) {
        std::cout << "There are no registered customers." << std::endl;
    }

    for (unsigned long int i = 0; i < qtd; i++) {
        std::cout << this->clientsList[i].getLogin() << std::endl;
    }
}

void ClientController::listAllUsers(){
    clientController.getQtdUserRegister();
}

void ClientController::editPlan() {
}

void ClientController::deleteUser() {
}

void ClientController::findUser() {
}