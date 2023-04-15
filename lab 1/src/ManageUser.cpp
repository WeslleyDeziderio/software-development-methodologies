#include "../include/ManageUser.hpp"

ManageUser::ManageUser() {
}

ManageUser::~ManageUser() {
}

void ManageUser::registerUser(){

}

void ManageUser::listAllUsers(){

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