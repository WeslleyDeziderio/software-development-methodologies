#include "../../include/controller/ManageUser.hpp"
#include <cstdlib> 

ManageUser manageUser;

ManageUser::ManageUser() {}

ManageUser::~ManageUser() {}

void ManageUser::setUserRegister(User a) {
    this->usersList.push_back(a);
}

void ManageUser::getQtdUserRegister() {
    int qtd = this->usersList.size();

    if (qtd == 0) {
        std::cout << "Não há usuários cadastrados!" << std::endl;
    }

    for (int i = 0; i < qtd; i++) {
        std::cout << this->usersList[i].getLogin() << std::endl;
    }
}

void ManageUser::listAllUsers() {
    manageUser.getQtdUserRegister();
}

void ManageUser::registerUser() {
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
        manageUser.userMenu();
    }
    catch (...) {
        std::cerr << "Erro: " << std::endl;
        system("read -p '\n\n\n\nAperte Enter para continuar' var");
        manageUser.userMenu();
    }

    try {
        a.validatePassword(a.getPassword());
    }
    catch (InvalidPasswordException& e) {
        std::cerr << "Erro: " << e.what() << std::endl;
        system("read -p '\n\n\n\nAperte Enter para continuar' var");
        manageUser.userMenu();
    }
    catch (...) {
        std::cerr << "Erro: " << std::endl;
        system("read -p '\n\n\n\nAperte Enter para continuar' var");
        manageUser.userMenu();
    }

    manageUser.setUserRegister(a);
}

void ManageUser::deleteUser() {
    this->usersList.pop_back();
}

void ManageUser::findUser() {}

void ManageUser::editUser() {}

void ManageUser::userMenu() {
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
