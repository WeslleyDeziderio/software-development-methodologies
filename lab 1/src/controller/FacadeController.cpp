#include "../../include/controller/FacadeController.hpp"
#include <cstdlib> 
#include "../view/UserView.cpp" 

FacadeController* FacadeController::instance = nullptr;
UserView* userMenu__ = new UserView();
 
FacadeController::FacadeController() {
    // Inicializa os membros das outras classes envolvidas, se necessário
}

FacadeController* FacadeController::getInstance() {
    if (instance == nullptr) {
        instance = new FacadeController();
    }
    return instance;
}



// Implementação dos métodos para CRUD de usuários
void FacadeController::setEntityRegister(const User& user) {
    // Lógica para cadastrar um usuário na lista de usuários
    usersList.push_back(user);
    std::cout << "Usuário cadastrado com sucesso!" << std::endl;
}

void FacadeController::editEntity() {
    // Lógica para editar um usuário na lista de usuários
    // ...
}

void FacadeController::deleteEntity() {
    // Lógica para excluir um usuário da lista de usuários
    // ...
}

void FacadeController::findEntity() {
    // Lógica para buscar um usuário na lista de usuários
    // ...
}

void FacadeController::listAllUsers() {
    // Lógica para listar todos os usuários cadastrados
    // ...
}

// Implementação dos métodos para CRUD de bicicletas
void FacadeController::setEntityRegister(const Bike& bike) {
    // Lógica para cadastrar uma bicicleta na lista de bicicletas
    bikesList.push_back(bike);
    std::cout << "Bicicleta cadastrada com sucesso!" << std::endl;
}

void FacadeController::editEntity(const Bike& bike) {
    // Lógica para editar uma bicicleta na lista de bicicletas
    // ...
}

void FacadeController::deleteEntity(const Bike& bike) {
    // Lógica para excluir uma bicicleta da lista de bicicletas
    // ...
}

void FacadeController::findEntity(const Bike& bike) {
    // Lógica para buscar uma bicicleta na lista de bicicletas
    // ...
}

void FacadeController::listAllBikes() {
    // Lógica para listar todas as bicicletas cadastradas
    // ...
}

void FacadeController::getQtdUserRegister() {
    int qtd = usersList.size();

    if (qtd == 0) {
        std::cout << "Não há usuários cadastrados!" << std::endl;
    }

    for (int i = 0; i < qtd; i++) {
        std::cout << this->usersList[i].getLogin() << std::endl;
    }
}

void FacadeController::registerUser() {
    std::string usrLogin;
    std::string usrPass;

    std::cout << "Insira seu login: ";
    std::cin >> usrLogin;

    std::cout << "Insira sua senha: ";
    std::cin >> usrPass;
    
    User a(usrLogin, usrPass);

    try {
        a.validateUsername(a.getLogin());
    }
    catch (InvalidLoginException& e) {
        std::cerr << "Erro: " << e.what() << std::endl;
        system("read -p '\n\n\n\nAperte Enter para continuar' var");
        userMenu__->showMenu();
    }
    catch (...) {
        std::cerr << "Erro: " << std::endl;
        system("read -p '\n\n\n\nAperte Enter para continuar' var");
        userMenu__->showMenu();
    }

    try {
        a.validatePassword(a.getPassword());
    }
    catch (InvalidPasswordException& e) {
        std::cerr << "Erro: " << e.what() << std::endl;
        system("read -p '\n\n\n\nAperte Enter para continuar' var");
        userMenu__->showMenu();
    }
    catch (...) {
        std::cerr << "Erro: " << std::endl;
        system("read -p '\n\n\n\nAperte Enter para continuar' var");
        userMenu__->showMenu();
    }

   setEntityRegister(a);
}
