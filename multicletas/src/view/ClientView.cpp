#include "../../include/view/ClientView.hpp"
#include "../../include/controller/FacadeController.hpp"

inline void ClientView::showMenu(){
    
    int escolha = 0;
    bool flag = true;
    while (flag) {
        std::cout << "\nCadastrar cliente - 1\n"  
                  << "Editar cliente - 2\n"
                  << "Listar clientes - 3\n"
                  << "Salvar alterações - 4\n"     
                  << "Sair - 5" 
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
                // facade_instance.listAllClients();
                break;
            case 4:
                saveMenu();
                break;
            case 5:
                flag = false;
                break;
            default:
                std::cout << "Entrada inválida, tente novamente!" << std::endl;
                break;
        }
    }
}

void ClientView::registrationMenu(){
    system("clear");
    std::unordered_map<std::string, std::string> auxMap;
    std::string clientLogin;
    std::string clientPass;
    std::string clientPlan;

    std::cout << "Insira seu login: ";
    std::cin >> clientLogin;

    std::cout << "Insira sua senha: ";
    std::cin >> clientPass;

    std::cout << "Insira seu plano: ";
    std::cin >> clientPlan;

    auxMap.insert(std::make_pair("login", clientLogin));
    auxMap.insert(std::make_pair("password", clientPass));
    auxMap.insert(std::make_pair("plan", clientPlan));

    this->facade_instance.registerClient(auxMap);
}

void ClientView::editMenu(){

    system("clear");
    std::string login, newLogin, newPassword = "", newPlan = "";
    std::cout << "Insira o login do usuário que deseja editar: ";
    std::cin >> login;

    std::cout << "Insira o novo login: ";
    std::cin >> newLogin;

    std::cout << "Insira a nova senha: ";
    std::cin >> newPassword;

    std::cout << "Insira o novo plano: ";
    std::cin >> newPlan;

    facade_instance.editClient(login, newLogin, newPassword, newPlan);

}

void ClientView::saveMenu(){
    facade_instance.saveClients();
}