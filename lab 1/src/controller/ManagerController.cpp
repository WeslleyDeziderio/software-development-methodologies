#include "../../include/controller/ManagerController.hpp"
#include "../../include/factories/Users/ManagerModelFactory.hpp"
#include <fstream>
#include <sstream>
#include <map>

ManagerController::ManagerController(){
    loadUsers();
}

ManagerController::~ManagerController(){

}



void ManagerController::updateEstablishment(std::string login, std::string newEstablishment){
    try{
        
        auto it = this->usersMap.find(login);
        if( it != usersMap.end() ){
        auto it = this->usersMap.find(login);

            if( it != usersMap.end() ){
                User& user = *it->second;
                Manager* manager = dynamic_cast<Manager*>(&user);
                manager->setEstablishment(newEstablishment);
                std::cout << "Estabelecimento atualizado com sucesso!" << std::endl;

            }else{
                throw std::runtime_error("Gerente não encontrado.");
            }
        }
    }
    catch(std::exception& e){
        std::cout << "Error: " << e.what() << std::endl;
    }
}

void ManagerController::updateCnpj(std::string login, std::string newCnpj){
    try{
        
        auto it = this->usersMap.find(login);
        if( it != usersMap.end() ){
        auto it = this->usersMap.find(login);

            if( it != usersMap.end() ){
                User& user = *it->second;
                Manager* manager = dynamic_cast<Manager*>(&user);
                manager->setCnpjCode(newCnpj);
                std::cout << "CNPJ atualizado com sucesso!" << std::endl;

            }else{
                throw std::runtime_error("Gerente não encontrado.");
            }
        }
    }
    catch(std::exception& e){
        std::cout << "Error: " << e.what() << std::endl;
    }
}

void ManagerController::updateLogin(std::string login, std::string newLogin){
    try{
        
        auto it = this->usersMap.find(login);
        if( it != usersMap.end() ){
        auto it = this->usersMap.find(login);

            if( it != usersMap.end() ){
                User& user = *it->second;
                Manager* manager = dynamic_cast<Manager*>(&user);

                try {
                    manager->validateUsername(newLogin);
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

                manager->setLogin(newLogin);
                std::cout << "Login atualizado com sucesso!" << std::endl;

            }else{
                throw std::runtime_error("Gerente não encontrado.");
            }
        }
    }
    catch(std::exception& e){
        std::cout << "Error: " << e.what() << std::endl;
    }
}

void ManagerController::updatePassword(std::string login, std::string newPassword){
    try{
        
        auto it = this->usersMap.find(login);
        if( it != usersMap.end() ){
        auto it = this->usersMap.find(login);

            if( it != usersMap.end() ){
                User& user = *it->second;
                Manager* manager = dynamic_cast<Manager*>(&user);

                try {
                    manager->validatePassword(newPassword);
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

                manager->setPassword(newPassword);
                std::cout << "Senha atualizada com sucesso!" << std::endl;
            }else{
                throw std::runtime_error("Gerente não encontrado.");
            }
        }
    }
    catch(std::exception& e){
        std::cout << "Error: " << e.what() << std::endl;
    }
}

void ManagerController::registerUser(std::unordered_map<std::string, std::string> auxMap){
    
    UserModelFactory* modelFactory = new ManagerModelFactory();
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

void ManagerController::findUser(std::string login){
    try{

        for (auto pair : this->usersMap) {
            std::string key = pair.first;
            User* user = pair.second;
            
            if(user->getLogin() == login){
                if (Manager* manager = dynamic_cast<Manager*>(user)) {
                    std::cout << "Gerente - " << "Login: " << manager->getLogin() << "\tPassword: " << manager->getPassword() << std::endl;
                    return;
                }
            }
        }
        throw std::runtime_error("Gerente não encontrado.");

    }
    catch(std::exception& e){
        std::cout << "Error: " << e.what() << std::endl;

    }
}

void ManagerController::listAllManagers(){
        try{

            bool hasManager = false;
            for (auto pair : this->usersMap) {
                std::string key = pair.first;
                User* user = pair.second;
                
                if(Manager* manager = dynamic_cast<Manager*>(user)) {
                    hasManager = true;
                    std::cout << "Gerente - " << "Login: " << manager->getLogin() << "\tPassword: " << manager->getPassword() 
                    << "\tEstablishment: " << manager->getEstablishment() << "\tcnpjCode: " << manager->getCnpjCode() << std::endl;
                }
            }
            if(!hasManager){
                throw std::runtime_error("Não existem gerentes cadastrados.");
            }
        }
    catch(std::exception& e){
        std::cout << "Error: " << e.what() << std::endl;

    }

}

void ManagerController::listAllManagersOrdered(){

    try{
        
        bool hasManager = false;

        std::map<std::string, User*> sortedMap(this->usersMap.begin(), this->usersMap.end());
        for (auto pair : sortedMap) {
            std::string key = pair.first;
            User* user = pair.second;
            
            if(Manager* manager = dynamic_cast<Manager*>(user)) {
                hasManager = true;
                std::cout << "Gerente - " << "Login: " << manager->getLogin() << "\tPassword: " << manager->getPassword() 
                << "\tEstablishment: " << manager->getEstablishment() << "\tcnpjCode: " << manager->getCnpjCode() << std::endl;
            }
        }
        if(!hasManager){
            throw std::runtime_error("Não existem gerentes cadastrados.");
        }
        
    }
    catch(std::exception& e){
        std::cout << "Error: " << e.what() << std::endl;

    }
}


void ManagerController::saveUsers(){
        try{
        std::ofstream file;
        file.open("src/data/managers.bin", std::ofstream::binary);

        if(!file.is_open()){
            throw std::runtime_error("Não foi possível abrir o arquivo.");
        }
        for (auto pair : this->usersMap) {
            std::string key = pair.first;
            User* user = pair.second;
            
            if (Manager* manager = dynamic_cast<Manager*>(user)) {
                file << manager->getLogin() << "," << manager->getPassword() << "," << manager->getEstablishment() << "," << manager->getCnpjCode() << std::endl;
            }
        }
        file.close();
    }
    catch(std::exception& e){
        std::cout << "Error: " << e.what() << std::endl;

    }
}

void ManagerController::loadUsers(){
    try{
        std::ifstream file;
        file.open("src/data/managers.bin",std::ios::binary);

        if(!file.is_open()){
            std::ofstream createFile("src/data/managers.bin");
            createFile.close();
            file.open("src/data/managers.bin",std::ios::binary);
        }

        if(!file.is_open()){
            throw std::runtime_error("Não foi possível abrir o arquivo.");
        }
        std::string line;
        while(std::getline(file, line)){
            std::vector<std::string> auxVector;
            std::string auxString;
            std::stringstream ss(line);
            while(std::getline(ss, auxString, ',')){
                auxVector.push_back(auxString);
            }
            std::unordered_map<std::string, std::string> auxMap;
            auxMap.insert(std::make_pair("login", auxVector[0]));
            auxMap.insert(std::make_pair("password", auxVector[1]));
            auxMap.insert(std::make_pair("establishment", auxVector[2]));
            auxMap.insert(std::make_pair("cnpj", auxVector[3]));
            UserModelFactory* modelFactory = new ManagerModelFactory();
            User* a = modelFactory->createUser(auxMap);
            this->usersMap.insert(std::make_pair(a->getLogin(), a));
        }
        file.close();
    }
    catch(std::exception& e){
        std::cout << "Error: " << e.what() << std::endl;

    }
}
