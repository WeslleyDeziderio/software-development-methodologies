#include "../../../include/view/Client/ClientView.hpp"
#include "../../../include/controller/FrontController.hpp"
#include "../../../include/controller/FacadeController.hpp"
#include "../../../include/view/Client/CommandClientRegister.hpp"
#include "../../../include/view/Client/CommandClientUpdate.hpp"

inline void ClientView::showMenu(){
    
    int escolha = 0;
    bool flag = true;
    while (flag) {
        system("clear");
        std::cout << "\nCadastrar cliente - 1\n"  
                  << "Editar cliente - 2\n"
                  << "Listar clientes - 3\n"
                  << "Sair - 4" 
                  << std::endl;
        
        while (!(std::cin >> escolha)) {
            std::cout << "Entrada inválida, tente novamente: ";
            std::cin.clear();
            // std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        switch (escolha) {
            case 1:
                registrationMenu();
                break;
            case 2:
                editMenu();
                break;
            case 3:
                listAllMenu();
                break;
            case 4:
                flag = false;
                break;
            default:
                std::cout << "Entrada inválida, tente novamente!" << std::endl;
                break;
        }
    }
}

void ClientView::registrationMenu(){
    Command* registrationCommand = new CommandClientRegister();
    registrationCommand->execute();

}

void ClientView::editMenu(){
    Command* updateCommand = new CommandClientUpdate();
    updateCommand->execute();
}

void ClientView::listAllMenu(){
    FrontController front_instance;
    front_instance.listAllClients();
}