#include "../../include/controller/ClientController.hpp"

ClientController clientController;

ClientController::ClientController(){
}

ClientController::~ClientController(){
}

void ClientController::editClient(){

    // std::string client_name;
    // std::cout << "Which client do you want to edit?" << std::endl;
    // std::cin >> client_name;

    // for(int i = 0; i < clientsList.size(); i++){

    // }
}

void ClientController::registerUser(){
    std::string usrLogin;
    std::string usrPass;

    std::cout << "Insira seu login: ";
    std::cin >> usrLogin;

    std::cout << "Insira sua senha: ";
    std::cin >> usrPass;
    
    // Client a(usrLogin, usrPass);
    Client* a = new Client(usrLogin, usrPass);
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
        clientController.setUserRegister(a);
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


void ClientController::listAllUsers(){
    
    int qtd_client = 0;
    for(User* aux_user : clientController.usersList){
        if(Client* client = dynamic_cast<Client*>(aux_user)){
            std::cout << "Client login: " << client->getLogin() << std::endl;
            qtd_client++;
        }
    }
    if(qtd_client == 0){
        std::cout << "There are no registered clients!" << std::endl;
    }
}

void ClientController::editPlan(){
}

// void ClientController::deleteUser() {
// }

// void ClientController::findUser() {
// }