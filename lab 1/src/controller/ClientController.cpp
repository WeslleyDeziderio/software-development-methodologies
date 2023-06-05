#include "../../include/controller/ClientController.hpp"
#include "../../include/factories/ClientModelFactory.hpp"
#include <memory>

ClientController::ClientController(){

}

ClientController::~ClientController(){

}

void ClientController::registerUser(std::unordered_map<std::string, std::string> auxMap){
    
    // std::unique_ptr<ModelFactory> modelFactory = std::make_unique<ClientModelFactory>();
    UserModelFactory* modelFactory = new ClientModelFactory();
    User* a = modelFactory->createUser(auxMap);
    try {
        a->validateUsername(a->getLogin());
    }
    catch (InvalidLoginException& e) {
        std::cerr << "Erro: " << e.what() << std::endl;
        system("read -p '\n\n\n\nPress enter to continue.' var");
        return;

    }
    catch (...) {
        std::cerr << "Erro: " << std::endl;
        system("read -p '\n\n\n\nPress enter to continue.' var");
        return;
    }

    try {
        a->validatePassword(a->getPassword());
    }
    catch (InvalidPasswordException& e) {
        std::cerr << "Erro: " << e.what() << std::endl;
        system("read -p '\n\n\n\nPress enter to continue.' var");
        return;

    }
    catch (...) {
        std::cerr << "Erro: " << std::endl;
        system("read -p '\n\n\n\nPress enter to continue.' var");
        return;

    }

    this->usersMap.insert(std::make_pair(a->getLogin(), a));
}

void ClientController::findUser(std::string login){
    try{

        for (auto pair : this->usersMap) {
            std::string key = pair.first;
            User* user = pair.second;
            
            if(user->getLogin() == login){
                if (Client* client = dynamic_cast<Client*>(user)) {
                    std::cout << "Cliente - " << "Login: " << client->getLogin() << "\tPassword: " << client->getPassword() << std::endl;
                    return;
                }
            }
        }
        throw std::runtime_error("Cliente não encontrado.");
        
    }
    catch(std::exception& e){
        std::cout << "Error: " << e.what() << std::endl;

    }
}

void ClientController::editPlan(std::string login, std::string newPlan){
    try{
        
        auto it = this->usersMap.find(login);

        if( it != usersMap.end() ){
        auto it = this->usersMap.find(login);

            if( it != usersMap.end() ){
                User& user = *it->second;

                Client* client = dynamic_cast<Client*>(&user);
                if(newPlan != ""){
                    client->setTipoPlano(newPlan);
                }

            }else{
                throw std::runtime_error("Cliente não encontrado.");
            }
        }
        
    }
    catch(std::exception& e){
        std::cout << "Error: " << e.what() << std::endl;

    }

}

void ClientController::listAllClients(){

    try{
        
        bool hasClient = false;
        for (auto pair : this->usersMap) {
            std::string key = pair.first;
            User* user = pair.second;
            
            if (Client* client = dynamic_cast<Client*>(user)) {
                hasClient = true;
                std::cout << "Cliente - " << "Login: " << client->getLogin() << "\tPassword: " << client->getPassword() << "\t Plano: "<< client->getTipoPlano() <<std::endl;
            }
        }
        if(!hasClient){
            throw std::runtime_error("Não existem clientes cadastrados.");
        }
        
    }
    catch(std::exception& e){
        std::cout << "Error: " << e.what() << std::endl;

    }
}
