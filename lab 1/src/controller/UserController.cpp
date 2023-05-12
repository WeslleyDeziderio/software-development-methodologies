#include "../../include/controller/UserController.hpp"

UserController userController;

UserController::UserController() {}

UserController::~UserController() {}

void UserController::setUserRegister(User a) {
    this->usersList.push_back(a);
}

void UserController::getQtdUserRegister() {
    unsigned long int qtd = this->usersList.size();

    if (qtd == 0) {
        std::cout << "Não há usuários cadastrados!" << std::endl;
    }

    for (unsigned long int i = 0; i < qtd; i++) {
        std::cout << this->usersList[i].getLogin() << std::endl;
    }
}

void UserController::listAllUsers() {
    userController.getQtdUserRegister();
}

void UserController::registerUser() {
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
        userController.userMenu();
    }
    catch (...) {
        std::cerr << "Erro: " << std::endl;
        system("read -p '\n\n\n\nAperte Enter para continuar' var");
        userController.userMenu();
    }

    try {
        a.validatePassword(a.getPassword());
    }
    catch (InvalidPasswordException& e) {
        std::cerr << "Erro: " << e.what() << std::endl;
        system("read -p '\n\n\n\nAperte Enter para continuar' var");
        userController.userMenu();
    }
    catch (...) {
        std::cerr << "Erro: " << std::endl;
        system("read -p '\n\n\n\nAperte Enter para continuar' var");
        userController.userMenu();
    }

    userController.setUserRegister(a);
}

void UserController::deleteUser() {
    this->usersList.pop_back();
}

void UserController::findUser() {}

void UserController::editUser() {}

void UserController::userMenu() {
    int escolha;
    int flag = 1;
	while(flag) {
        system("clear");
        std::cout << "\nCadastrar usuário - 1\n" << "Procurar usuário - 2\n" << "Listar usuários - 3\n" 
                    << "Editar usuário - 4\n"    << "Deletar usuário - 5\n"  << "Sair - 6" << std::endl;
        std::cin >> escolha;

			switch(escolha) {
				case 1:
                    system("clear");
                    registerUser();
					break;
				case 2:
                    system("clear");
					findUser();
					break;
				case 3:
                    system("clear");
					listAllUsers();
					system("read -p '\n\n\n\nAperte Enter para continuar' var");
					break;
                case 4:
                    editUser();
                    break;
                case 5:
                    deleteUser();
                    break;
				case 6:
					system("clear");
					flag = 0;
					break;
				default:
                    std::cout << "A entrada não é valida por favor, tente novamente!" << std::endl;
                    flag = 0;
		}
	}
}
