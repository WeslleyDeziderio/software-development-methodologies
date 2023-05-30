#include "../../include/view/ClientView.hpp"
#include "../../include/controller/FacadeController.hpp"

inline void ClientView::showMenu(){
    FacadeController facade_instance;
    int escolha = 0;
    bool flag = true;
    while (flag) {
        std::cout << "\nCadastrar usuário - 1\n" 
                  << "Procurar usuário - 2\n" 
                  << "Listar usuários - 3\n" 
                  << "Editar cliente - 4\n"    
                  << "Sair - 6" 
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
                
                // findUser();
                break;
            case 3:
                facade_instance.listAllClients();
                // std::cout << "\nPressione Enter para continuar...\n";
                // std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cin.get();
                break;
            case 4:
                // editUser();
                break;
            case 5:
                std::cout << "Tem certeza que deseja excluir um usuário? (s/n): ";
                char confirmacao;
                std::cin >> confirmacao;
                if (confirmacao == 's' || confirmacao == 'S') {
                    // deleteUser();
                }
                break;
            case 6:
                flag = false;
                break;
            default:
                std::cout << "Entrada inválida, tente novamente!" << std::endl;
                break;
        }
    }
    
}