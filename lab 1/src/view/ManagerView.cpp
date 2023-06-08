#include "../../include/view/ManagerView.hpp"
#include "../../include/controller/FacadeController.hpp"

inline void ManagerView::showMenu(){
    int escolha = 0;
    bool flag = true;
    while (flag) {
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
                // editMenu();
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

            this->facade_instance.registerClient(auxMap);
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

            this->facade_instance.registerManager(auxMap);
            break;
        default:
            std::cout << "Entrada inválida." << std::endl;
            break;
    }
}

void ManagerView::deleteMenu(){
    
    std::string user_name;
    int escolha = 0;
    std::cout << "Cadastrar cliente - 1\n"
              << "Cadastrar gerente - 2"
              << std::endl;
    std::cin >> escolha;

    switch (escolha) {
        case 1:
            std::cout << "Qual cliente deseja deletar?" << std::endl;
            std::cin >> user_name;

            this->facade_instance.deleteClient(user_name);
            break;
        case 2:
            std::cout << "Qual gerente deseja deletar?" << std::endl;
            std::cin >> user_name;

            this->facade_instance.deleteManager(user_name);
            break;
        default:
            std::cout << "Entrada inválida." << std::endl;
            break;
    }
    
}

void ManagerView::editMenu(){
    
}

void ManagerView::saveMenu(){
    this->facade_instance.saveClients();   
    this->facade_instance.saveManagers();
}