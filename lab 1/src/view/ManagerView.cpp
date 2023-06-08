#include "../../include/view/ManagerView.hpp"
#include "../../include/controller/FrontController.hpp"
#include "../../include/controller/FacadeController.hpp"

inline void ManagerView::showMenu(){
    int escolha = 0;
    bool flag = true;
    while (flag) {
        system("clear");
        std::cout << "\nCadastrar usuário - 1\n"
                  << "Procurar usuário - 2\n" 
                  << "Listar usuários - 3\n" 
                  << "Editar usuário - 4\n"
                  << "Deletar usuário - 5\n"
                  << "Salvar operações - 6\n"    
                  << "Sair - 7" 
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
                findMenu();
                break;
            case 3:
                listAllMenu();
                break;
            case 4:
                editMenu();
                break;
            case 5:
                deleteMenu();
                break;
            case 6:
                saveMenu();
                break;
            case 7:
                flag = false;
                break;
            default:
                std::cout << "Entrada inválida, tente novamente!" << std::endl;
                break;
        }
    }
    
}

void ManagerView::registrationMenu(){
    system("clear");
    std::unordered_map<std::string, std::string> auxMap;
    std::string userLogin;
    std::string userPass;
    std::string clientPlan;
    std::string managerEstablishment;
    std::string managerCnpjCode;
    int escolha = 0;

    std::cout << "Cadastrar cliente - 1\n"
              << "Cadastrar gerente - 2"
              << std::endl;
    std::cin >> escolha;
    system("clear");
    switch (escolha) {
        case 1:
            std::cout << "Insira seu login: ";
            std::cin >> userLogin;

            std::cout << "Insira sua senha: ";
            std::cin >> userPass;

            std::cout << "Insira seu plano: ";
            std::cin >> clientPlan;

            auxMap.insert(std::make_pair("login", userLogin));
            auxMap.insert(std::make_pair("password", userPass));
            auxMap.insert(std::make_pair("plan", clientPlan));

            this->front_instance.registerClient(auxMap);
            break;
        case 2:
            std::cout << "Insira seu login: ";
            std::cin >> userLogin;

            std::cout << "Insira sua senha: ";
            std::cin >> userPass;

            std::cout << "Insira o Establishment: ";
            std::cin >> managerEstablishment;

            std::cout << "Insira o cnpj Code: ";
            std::cin >> managerCnpjCode;

            auxMap.insert(std::make_pair("login", userLogin));
            auxMap.insert(std::make_pair("password", userPass));
            auxMap.insert(std::make_pair("establishment", managerEstablishment));
            auxMap.insert(std::make_pair("cnpj", managerCnpjCode));

            this->front_instance.registerManager(auxMap);
            break;
        default:
            std::cout << "Entrada inválida." << std::endl;
            break;
    }
}

void ManagerView::deleteMenu(){
    system("clear");
    std::string user_name;
    int escolha = 0;
    std::cout << "Deletar cliente - 1\n"
              << "Deletar gerente - 2"
              << std::endl;
    std::cin >> escolha;

    switch (escolha) {
        case 1:
            std::cout << "Qual cliente deseja deletar?" << std::endl;
            std::cin >> user_name;

            this->front_instance.deleteClient(user_name);
            break;
        case 2:
            std::cout << "Qual gerente deseja deletar?" << std::endl;
            std::cin >> user_name;

            this->front_instance.deleteManager(user_name);
            break;
        default:
            std::cout << "Entrada inválida." << std::endl;
            break;
    }
    
}

void ManagerView::editMenu(){
    system("clear");
    std::string login, newLogin, newPassword = "", newPlan = "", newEstablishment = "", newCnpj = "";


    int escolha = 0;
    int escolha1 = 0;
    std::cout << "Editar clientes - 1\n"
              << "Editar gerentes - 2\n"
              << std::endl;
    std::cin >> escolha;
    system("clear");

    std::cout << "Insira o login: ";
    std::cin >> login;
    system("clear");

    switch (escolha) {
        case 1:

            
            break;
        case 2:
            std::cout << "Editar login - 1\n"
                      << "Editar senha - 2\n"
                      << "Editar estabelecimento - 3\n"
                      << "Editar cnpj - 4\n"
                      << std::endl;
            std::cin >> escolha1;
            system("clear");
            switch (escolha1){
            case 1:
                std::cout << "Insira o novo login: ";
                std::cin >> newLogin;
                front_instance.updateManagersLogin(login, newLogin);
                break;
            case 2:
                std::cout << "Insira o novo senha: ";
                std::cin >> newPassword;
                front_instance.updateManagersLogin(login, newPassword);
            
                break;
            case 3:
                std::cout << "Insira o novo estabelecimento: ";
                std::cin >> newEstablishment;
                front_instance.updateManagersEstablishment(login, newEstablishment);
            
                break;
            case 4:
                std::cout << "Insira o novo cnpj: ";
                std::cin >> newCnpj;
                front_instance.updateManagersCnpj(login, newCnpj);
            
                break;
            default:
                std::cout << "Entrada inválida." << std::endl;
                break;
            }
            
            break;
        default:
            std::cout << "Entrada inválida." << std::endl;
            break;
    }
    
}

void ManagerView::saveMenu(){
    system("clear");
    int escolha = 0;
    std::cout << "Salvar alterações em Clients - 1\n"
              << "Salvar alterações em Managers - 2\n"
              << "Salvar todas as alterações - 3"
              << std::endl;
    std::cin >> escolha;

    switch (escolha) {
        case 1:
            this->front_instance.saveClients();
            break;
        case 2:
            this->front_instance.saveManagers();
            break;
        case 3:
            this->front_instance.saveClients();
            this->front_instance.saveManagers();
            break;
        default:
            std::cout << "Entrada inválida." << std::endl;
            break;
    }
    
}

void ManagerView::listAllMenu(){
    system("clear");
    int escolha = 0;
    std::cout << "Listar usuários - 1\n"
              << "Listar usuários ordenados - 2\n"
              << "Listar clientes - 3\n"
              << "Listar gerentes - 4"
              << std::endl;
    std::cin >> escolha;
    FacadeController* facade_instance = new FacadeController();

    switch (escolha) {
        case 1:
            facade_instance->listAllUsers();
            break;
        case 2:
            facade_instance->listAllUsersOrdered();
            break;
        case 3:
            this->front_instance.listAllClients();
            break;
        case 4:
            this->front_instance.listAllManagers();
            break;
        default:
            std::cout << "Entrada inválida." << std::endl;
            break;
    }

}