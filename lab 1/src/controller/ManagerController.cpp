#include "../../include/controller/ManagerController.hpp"
#include "../../include/factories/ManagerModelFactory.hpp"
#include <memory>

ManagerController::ManagerController(){

}

ManagerController::~ManagerController(){

}

void ManagerController::createEstablisment(){

}

void ManagerController::retrieveEstablishment(){

}

void ManagerController::updateEstablishment(){

}

void ManagerController::deleteEstablisment(){

}

void ManagerController::registerUser(std::unordered_map<std::string, std::string> auxMap){
    
    // std::unique_ptr<ModelFactory> modelFactory = std::make_unique<ManagerModelFactory>();
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
