#include "../include/ManageUser.hpp"

ManageUser::ManageUser() {
}

ManageUser::~ManageUser() {
}

void registerUser(){

}

void listAllUsers(){

}

void deleteUser(){

}

void findUser(){

}

void editUser(){

}

void userMenu(){

    int escolha;
	while(1){
			system("cls");
			std::cout << "Cadastrar usuario - 1\n" << "Procurar usuario - 2\n" << "Listar usuarios - 3\n" 
                      << "Editar usuario - 4\n"    << "Deletar usuario - 5\n"  << std::endl;
			std::cin >> escolha;

			
			switch(escolha){
				
				case 1:
					system("cls");
                    registerUser();
					break;
				case 2:
					system("cls");
					findUser();
					break;
				case 3:
					system("cls");
					listAllUsers();
					system("pause");
					break;
                case 4:
                    system("cls");
                    editUser();
                    break;
                case 5:
                    system("cls");
                    deleteUser();
                    break;
				default:
					break;
		}
	}


}