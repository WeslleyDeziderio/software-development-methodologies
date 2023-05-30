#include "../../include/view/ManagerView.hpp"
#include "../../include/controller/FacadeController.hpp"

inline void ManagerView::showMenu(){
    FacadeController facade_instance;
    int escolha = 0;
    bool flag = true;
    while (flag) {
        std::cout << "\nCadastrar cliente - 1\n"
                  << "Cadastrar gerente - 2\n" 
                  << "Procurar usuário - 3\n" 
                  << "Listar clientes - 4\n"
                  << "Listar gerentes - 5\n" 
                  << "Editar cliente - 6\n"
                  << "Editar gerente - 7\n"    
                  << "Sair - 8" 
                  << std::endl;
        
        while (!(std::cin >> escolha)) {
            std::cout << "Entrada inválida, tente novamente: ";
            std::cin.clear();
            // std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        switch (escolha) {
            case 1:
                facade_instance.registerClient();
                break;
            case 2:
                
                facade_instance.registerManager();
                break;
            case 3:
                // findUser();
                break;
            case 4:
                facade_instance.listAllClients();
                break;
            case 5:
                facade_instance.listAllManagers();
                break;
            case 6:
                // editClient();
                break;
            case 7:
                // editManager();
                break;
            case 8:
                flag = false;
                break;
            default:
                std::cout << "Entrada inválida, tente novamente!" << std::endl;
                break;
        }
    }
    
}