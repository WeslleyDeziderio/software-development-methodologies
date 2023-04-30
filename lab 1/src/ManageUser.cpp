#include "../include/ManageUser.hpp"
#include <cstdlib> 

ManageUser user_manager;


ManageUser manageUser;

ManageUser::ManageUser() {

}

ManageUser::~ManageUser() {
}

<<<<<<< HEAD
void ManageUser::setUserRegister(User a) {
    this->usersList.push_back(a);
}

void ManageUser::getQtdUserRegister() {
    int qtd = this->usersList.size();

    if (qtd == 0) {
        std::cout << "Não há usuários cadastrados!" << std::endl;
    }
=======
void ManageUser::setUserRegister(User aux){
	this->listOfUsers.push_back(aux);
}

void ManageUser::getQtdUserRegister(){

	int qtd = this->listOfUsers.size();


	for(int i = 0; i < qtd; i++){

		std::cout << this->listOfUsers[i].getLogin() << std::endl;

	}
	if(qtd == 0 ){
		std::cout << "Nenhum usuario cadastrado." << std::endl;
	}
	// std::cin.get();
}

void ManageUser::registerUser(){

	std::cout << "Digite seu login: " << std::endl;
	std::string usr;
	std::cin >> usr;
	std::cout << "Digite sua senha: " << std::endl;
	std::string pass;
	std::cin >> pass;

	User aux(usr,pass);

	user_manager.setUserRegister(aux);

}

void ManageUser::listAllUsers(){

	user_manager.getQtdUserRegister();

}

void ManageUser::deleteUser(){
>>>>>>> 4673e5820df6a71f0f08e72fe19a465a5f5ddec2

    for (int i = 0; i < qtd; i++) {
        std::cout << this->usersList[i].getLogin() << std::endl;
    }
}

<<<<<<< HEAD
void ManageUser::listAllUsers() {
    manageUser.getQtdUserRegister();
}
=======
void ManageUser::findUser(){
>>>>>>> 4673e5820df6a71f0f08e72fe19a465a5f5ddec2

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
        manageUser.userMenu();
    }
    catch (...) {
        std::cerr << "Erro: " << std::endl;
        manageUser.userMenu();
    }

    try {
        a.validatePassword(a.getPassword());
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

<<<<<<< HEAD
void ManageUser::deleteUser() {}
=======
void ManageUser::editUser(){
>>>>>>> 4673e5820df6a71f0f08e72fe19a465a5f5ddec2

void ManageUser::findUser() {}

<<<<<<< HEAD
void ManageUser::editUser() {}
=======
void ManageUser::userMenu(){
>>>>>>> 4673e5820df6a71f0f08e72fe19a465a5f5ddec2

void ManageUser::userMenu() {
    int escolha;
<<<<<<< HEAD
    int flag = 1;
	while(flag) {
			std::cout << "Cadastrar usuario - 1\n" << "Procurar usuario - 2\n" << "Listar usuarios - 3\n" 
                      << "Editar usuario - 4\n"    << "Deletar usuario - 5\n"  << std::endl;
	        std::cin >> escolha;
=======
	int flag = 1;
	while(flag){
			system("clear");
			std::cout << "Cadastrar usuario - 1\n" << "Procurar usuario - 2\n" << "Listar usuarios - 3\n" 
                      << "Editar usuario - 4\n"    << "Deletar usuario - 5\n"  << "Sair - 6"
					  << std::endl;
			std::cin >> escolha;
>>>>>>> 4673e5820df6a71f0f08e72fe19a465a5f5ddec2

			switch(escolha) {
				case 1:
<<<<<<< HEAD
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
=======
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
					system("read -p '\n\n\n\nPress Enter to continue...' var");
					break;
                case 4:
                    system("clear");
                    editUser();
                    break;
                case 5:
                    system("clear");
>>>>>>> 4673e5820df6a71f0f08e72fe19a465a5f5ddec2
                    deleteUser();
                    break;
				case 6:
					system("clear");
					flag = 0;
					break;
				default:
                    std::cout << "Essa entrada não é valida, tente novamente!" << std::endl;
                    flag = 0;
		}
	}
<<<<<<< HEAD
}
=======
}
>>>>>>> 4673e5820df6a71f0f08e72fe19a465a5f5ddec2
