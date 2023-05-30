#include "../../include/controller/ManagerController.hpp"

ManagerController managerController;

ManagerController::ManagerController(){

}

ManagerController::~ManagerController(){

}

void ManagerController::registerUser(){
    std::string usrLogin;
    std::string usrPass;

    std::cout << "Insira seu login: ";
    std::cin >> usrLogin;

    std::cout << "Insira sua senha: ";
    std::cin >> usrPass;
    
    // Manager a(usrLogin, usrPass);
    Manager* a = new Manager(usrLogin, usrPass);
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
        managerController.setUserRegister(a);
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

void ManagerController::listAllUsers(){
    
    int qtd_manager = 0;
    for(User* aux_user : managerController.usersList){
        if(Manager* manager = dynamic_cast<Manager*>(aux_user)){
            std::cout << "Manager login: " << manager->getLogin() << std::endl;
            qtd_manager++;
        }
    }
    if(qtd_manager == 0){
        std::cout << "There are no registered managers!" << std::endl;
    }
}

void ManagerController::editUser(){

}

void ManagerController::deleteUser(){

}

void ManagerController::findUser(){

}

void ManagerController::createEstablisment(){

}

void ManagerController::retrieveEstablishment(){

}

void ManagerController::updateEstablishment(){

}

void ManagerController::deleteEstablisment(){

}

