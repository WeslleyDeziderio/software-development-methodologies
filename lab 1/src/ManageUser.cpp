#include "../include/ManageUser.hpp"
#include <cstdlib> 

ManageUser user_manager;

ManageUser::ManageUser() {

}

ManageUser::~ManageUser() {
}

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

}

void ManageUser::findUser(){

}

void ManageUser::editUser(){

}

void ManageUser::userMenu(){

    int escolha;
	int flag = 1;
	while(flag){
			system("clear");
			std::cout << "Cadastrar usuario - 1\n" << "Procurar usuario - 2\n" << "Listar usuarios - 3\n" 
                      << "Editar usuario - 4\n"    << "Deletar usuario - 5\n"  << "Sair - 6"
					  << std::endl;
			std::cin >> escolha;

			
			switch(escolha){
				
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
					system("read -p '\n\n\n\nPress Enter to continue...' var");
					break;
                case 4:
                    system("clear");
                    editUser();
                    break;
                case 5:
                    system("clear");
                    deleteUser();
                    break;
				case 6:
					system("clear");
					flag = 0;
					break;
				default:
					break;
		}
	}
}