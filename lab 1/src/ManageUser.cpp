#include "../include/ManageUser.hpp"


ManageUser manageUser;

ManageUser::ManageUser() {
}

ManageUser::~ManageUser() {
}

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
    a.setLogin(usrLogin);
    a.setPassword(usrPass);

    try {
        a.nameValidator(a.getLogin());
    }
    catch (InvalidLoginException& e) {
        std::cerr << "Erro: " << e.what() << std::endl;
        manageUser.userMenu();
    }
    catch (...) {
        std::cerr << "Erro: " << std::endl;
        manageUser.userMenu();
    }

    try {
        a.passValidator(a.getPassword());
    }
    catch (InvalidPasswordException& e) {
        std::cerr << "Erro: " << e.what() << std::endl;
        manageUser.userMenu();
    }
    catch (...) {
        std::cerr << "Erro: " << std::endl;
        manageUser.userMenu();
    }

    manageUser.setUserRegister(a);
}

void ManageUser::deleteUser() {}

void ManageUser::findUser() {}

void ManageUser::editUser() {}

void ManageUser::userMenu() {
    int escolha;
    int flag = 1;
	while(flag) {
			std::cout << "Cadastrar usuario - 1\n" << "Procurar usuario - 2\n" << "Listar usuarios - 3\n" 
                      << "Editar usuario - 4\n"    << "Deletar usuario - 5\n"  << std::endl;
	        std::cin >> escolha;

			switch(escolha) {
				case 1:
                    registerUser();
					break;
				case 2:
					findUser();
					break;
				case 3:
					listAllUsers();
					system("read -p '\n\n\n\nAperte Enter para continuar' var");
					break;
                case 4:
                    editUser();
                    break;
                case 5:
                    deleteUser();
                    break;
				default:
                    std::cout << "Essa entrada não é valida, tente novamente!" << std::endl;
                    flag = 0;
		}
	}
}
