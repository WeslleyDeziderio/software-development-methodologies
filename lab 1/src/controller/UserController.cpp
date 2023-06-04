#include "../../include/controller/UserController.hpp"
#include "../factories/ModelFactory.cpp"
#include "algorithm"

UserController::UserController() {}

UserController::~UserController() {}

void UserController::registerUser(std::unordered_map<std::string, std::string> auxMap){
    
    User* a = ModelFactory::createUser(auxMap);
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

void UserController::deleteUser(std::string login){
    auto it = this->usersMap.find(login);

    try{
        if( it != usersMap.end() ){
            this->usersMap.erase(it);
            std::cout << "Usuário deletado."  << std::endl;

        }else{
            throw std::runtime_error("Usuário não encontrado.");
        }
    }
    catch(std::exception& e){
        std::cout << "Error: " << e.what() << std::endl;

    }
}

void UserController::findUser(std::string login){
    try{
        if (usersMap.empty()) {
            throw std::runtime_error("Não existem usuários cadastrados.");
        } else {
            for (auto pair : this->usersMap) {
                std::string key = pair.first;
                User* user = pair.second;
                
                if(user->getLogin() == login){
                    if (Client* client = dynamic_cast<Client*>(user)) {
                        std::cout << "Cliente - " << "Login: " << client->getLogin() << "\tPassword: " << client->getPassword() << std::endl;
                        return;
                    } else if (Manager* manager = dynamic_cast<Manager*>(user)) {
                        std::cout << "Gerente - " << "Login: " << manager->getLogin() << "\tPassword: " << manager->getPassword() << std::endl;
                        return;
                    }
                }
            }
            throw std::runtime_error("Usuário não encontrado.");
        }
    }
    catch(std::exception& e){
        std::cout << "Error: " << e.what() << std::endl;

    }
}

void UserController::editUser(std::string login, std::string newLogin, std::string newPassword){
    try{
        if (usersMap.empty()) {
            throw std::runtime_error("Não existem usuários cadastrados.");
        } else {
            auto it = this->usersMap.find(login);

            if( it != usersMap.end() ){
                User* user = it->second;

                try {
                    user->validateUsername(user->getLogin());
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
                    user->validatePassword(user->getPassword());
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
                this->usersMap.erase(it);

                
                user->setLogin(newLogin);
                user->setPassword(newPassword);  
                

                this->usersMap.insert(std::make_pair(newLogin, user));
                std::cout << "Usuário editado."  << std::endl;
            }else{
                throw std::runtime_error("Usuário não encontrado.");
            }
        }
    }
    catch(std::exception& e){
        std::cout << "Error: " << e.what() << std::endl;

    }

}

void UserController::editLogin(std::string login, std::string newLogin){
    try{
        if (usersMap.empty()) {
            throw std::runtime_error("Não existem usuários cadastrados.");
        } else {
            auto it = this->usersMap.find(login);

            if( it != usersMap.end() ){
                User* user = it->second;

                try {
                    user->validateUsername(user->getLogin());
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

                this->usersMap.erase(it);
                user->setLogin(newLogin);
                this->usersMap.insert(std::make_pair(newLogin, user));
                std::cout << "Login editado com sucesso."  << std::endl;
            }else{
                throw std::runtime_error("Usuário não encontrado.");
            }
        }
    }
    catch(std::exception& e){
        std::cout << "Error: " << e.what() << std::endl;

    }

}

void UserController::editPassword(std::string login, std::string newPassword){
    try{
        if (usersMap.empty()) {
            throw std::runtime_error("Não existem usuários cadastrados.");
        } else {
            auto it = this->usersMap.find(login);

            if( it != usersMap.end() ){
                User& user = *it->second;

                try {
                    user.validatePassword(user.getPassword());
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
                user.setPassword(newPassword);
                std::cout << "Senha editado com sucesso."  << std::endl;
            }else{
                throw std::runtime_error("Usuário não encontrado.");
            }
        }
    }
    catch(std::exception& e){
        std::cout << "Error: " << e.what() << std::endl;

    }

}

void UserController::listAllUsers(){

    try{
        if (usersMap.empty()) {
            throw std::runtime_error("Não existem usuários cadastrados.");
        } else {
            for (auto pair : this->usersMap) {
                std::string key = pair.first;
                User* user = pair.second;
                
                if (Client* client = dynamic_cast<Client*>(user)) {
                    std::cout << "Cliente - " << "Login: " << client->getLogin() << "\tPassword: " << client->getPassword() << std::endl;
                } else if (Manager* manager = dynamic_cast<Manager*>(user)) {
                    std::cout << "Gerente - " << "Login: " << manager->getLogin() << "\tPassword: " << manager->getPassword() << std::endl;
                }
            }
        }
    }
    catch(std::exception& e){
        std::cout << "Error: " << e.what() << std::endl;

    }
}
