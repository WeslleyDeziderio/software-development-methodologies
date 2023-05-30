#include "../../include/controller/ClientController.hpp"

ClientController clientController;

ClientController::ClientController(){
}

ClientController::~ClientController(){
}

void ClientController::editUser(){

    std::string client_name;
    std::cout << "Which client do you want to edit?" << std::endl;
    std::cin >> client_name;

    for(User* aux_user : clientController.usersList){
        if(Client* client = dynamic_cast<Client*>(aux_user)){
            if(client->getLogin() == client_name){

                std::cout << "What do you want to edit?" << std::endl;
                std::cout << "1 - Login" << std::endl;
                std::cout << "2 - Password" << std::endl;
                std::cout << "3 - Plan" << std::endl;


                int option;
                std::string login_aux;
                std::string password_aux;
                std::string plan_aux;

                std::cin >> option;

                switch(option){
                    case 1:
                        std::cout << "New login: ";
                        std::cin >> login_aux;
                        try {
                            client->validateUsername(login_aux);
                            client->setLogin(login_aux);
                        }
                        catch (InvalidLoginException& e) {
                            std::cerr << "Erro: " << e.what() << std::endl;
                            system("read -p '\n\n\n\nAperte Enter para continuar' var");

                        }
                        catch (...) {
                            std::cerr << "Erro: " << std::endl;
                            system("read -p '\n\n\n\nAperte Enter para continuar' var");

                        }
                        break;
                    case 2:
                        std::cout << "New password: ";
                        std::cin >> password_aux;
                        
                        try {
                            client->validatePassword(password_aux);
                            client->setPassword(password_aux);
                        }
                        catch (InvalidPasswordException& e) {
                            std::cerr << "Erro: " << e.what() << std::endl;
                            system("read -p '\n\n\n\nAperte Enter para continuar' var");

                        }
                        catch (...) {
                            std::cerr << "Erro: " << std::endl;
                            system("read -p '\n\n\n\nAperte Enter para continuar' var");

                        }

                        break;
                    case 3:
                        std::cout << "New plan: ";
                        std::cin >> plan_aux;
                        client->setTipoPlano(plan_aux);
                        break;
                    default:
                        std::cout << "Invalid option!" << std::endl;
                        break;
                }
                
            }
        }
    }
}

void ClientController::deleteUser(){
    
    std::string client_name;
    std::cout << "Which client do you want to delete?" << std::endl;
    std::cin >> client_name;

    std::vector<User*>::iterator clientPosition;

    for(auto it = clientController.usersList.begin(); it != clientController.usersList.end(); it++){
        if(Client* client = dynamic_cast<Client*>(*it)){
            if(client->getLogin() == client_name){
                clientPosition = it;
                break;
            }
        }
    }

    if (clientPosition != clientController.usersList.end()) {
        clientController.usersList.erase(clientPosition);
        std::cout << "\n\nClient deleted!" << std::endl;
    }

}

void ClientController::findUser(){

    std::string client_name;
    std::cout << "Which client do you want to show?" << std::endl;
    std::cin >> client_name;

    for(User* aux_user : clientController.usersList){
        if(Client* client = dynamic_cast<Client*>(aux_user)){
            if(client->getLogin() == client_name){
                std::cout << "Client login: " << client->getLogin() << std::endl;
                std::cout << "Client plan: " << client->getTipoPlano() << std::endl;
                return; 
            }
        }
    }
    std::cout << "\n\nClient not found!" << std::endl;
    
}

void ClientController::registerUser(){
    std::string usrLogin;
    std::string usrPass;

    std::cout << "Insira seu login: ";
    std::cin >> usrLogin;

    std::cout << "Insira sua senha: ";
    std::cin >> usrPass;
    
    // Client a(usrLogin, usrPass);
    Client* a = new Client(usrLogin, usrPass);
    try {
        a->validateUsername(a->getLogin());
    }
    catch (InvalidLoginException& e) {
        std::cerr << "Erro: " << e.what() << std::endl;
        system("read -p '\n\n\n\nAperte Enter para continuar' var");

    }
    catch (...) {
        std::cerr << "Erro: " << std::endl;
        system("read -p '\n\n\n\nAperte Enter para continuar' var");

    }

    try {
        a->validatePassword(a->getPassword());
        clientController.setUserRegister(a);
    }
    catch (InvalidPasswordException& e) {
        std::cerr << "Erro: " << e.what() << std::endl;
        system("read -p '\n\n\n\nAperte Enter para continuar' var");

    }
    catch (...) {
        std::cerr << "Erro: " << std::endl;
        system("read -p '\n\n\n\nAperte Enter para continuar' var");

    }
}


void ClientController::listAllUsers(){
    
    int qtd_client = 0;
    for(User* aux_user : clientController.usersList){
        if(Client* client = dynamic_cast<Client*>(aux_user)){
            std::cout << "Client login: " << client->getLogin() << std::endl;
            qtd_client++;
        }
    }
    if(qtd_client == 0){
        std::cout << "There are no registered clients!" << std::endl;
    }
}

void ClientController::editPlan(){
}
