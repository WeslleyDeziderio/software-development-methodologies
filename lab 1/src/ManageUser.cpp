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

void ManageUser::registerUser(){
    std::string usrLogin;
    std::string usrPass;

    std::cout << "Insira seu login: ";
    std::cin >> usrLogin;

    std::cout << "Insira sua senha: ";
    std::cin >> usrPass;

    User a(usrLogin, usrPass);
    manageUser.setUserRegister(a);
}

void ManageUser::deleteUser(){

}

void ManageUser::findUser(){

}

void ManageUser::editUser(){

}

void ManageUser::userMenu(){

    int escolha;
	while(1){
			system("clear");
			std::cout << "Cadastrar usuario - 1\n" << "Procurar usuario - 2\n" << "Listar usuarios - 3\n" 
                      << "Editar usuario - 4\n"    << "Deletar usuario - 5\n"  << std::endl;
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
					system("pause");
					break;
                case 4:
                    system("clear");
                    editUser();
                    break;
                case 5:
                    system("clear");
                    deleteUser();
                    break;
				default:
					break;
		}
	}


}
