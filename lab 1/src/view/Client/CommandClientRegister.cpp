#include "../../../include/view/Client/CommandClientRegister.hpp"

CommandClientRegister::CommandClientRegister(){
    this->front_instance = new FrontController();
}

CommandClientRegister::~CommandClientRegister() {}

void CommandClientRegister::execute(){
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

    this->front_instance->registerClient(auxMap);
    this->front_instance->saveClients();

}