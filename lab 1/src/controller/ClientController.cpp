#include "../../include/controller/ClientController.hpp"


ClientController::ClientController(){

}

ClientController::~ClientController(){

}

void ClientController::editPlan(std::string login, std::string newPlan){
    try{
        if (usersMap.empty()) {
            throw std::runtime_error("Não existem clientes cadastrados.");
        } else {
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
    }
    catch(std::exception& e){
        std::cout << "Error: " << e.what() << std::endl;

    }

}

void ClientController::listAllClients(){

    try{
        if (usersMap.empty()) {
            throw std::runtime_error("Não existem clientes cadastrados.");
        } else {
            for (auto pair : this->usersMap) {
                std::string key = pair.first;
                User* user = pair.second;
                
                if (Client* client = dynamic_cast<Client*>(user)) {
                    std::cout << "Cliente - " << "Login: " << client->getLogin() << "\tPassword: " << client->getPassword() << "\t Plano: "<< client->getTipoPlano() <<std::endl;
                }
            }
        }
    }
    catch(std::exception& e){
        std::cout << "Error: " << e.what() << std::endl;

    }
}
