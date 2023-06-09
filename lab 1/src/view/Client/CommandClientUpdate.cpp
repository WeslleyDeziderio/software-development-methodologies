#include "../../../include/view/Client/CommandClientUpdate.hpp"

CommandClientUpdate::CommandClientUpdate(){
    this->front_instance = new FrontController();
}

CommandClientUpdate::~CommandClientUpdate() {}

void CommandClientUpdate::execute() {
    system("clear");
    int escolha = 0;
    std::string login, newLogin, newPassword = "", newPlan = "";
    std::cout   << "Editar login - 1\n"
                << "Editar senha - 2\n"
                << "Editar plano - 3"
                << std::endl;
    std::cin >> escolha;

    system("clear");
    switch (escolha){
    case 1:
        std::cout << "Insira o novo login: ";
        std::cin >> newLogin;
        front_instance->updateClientsLogin(login, newLogin);
        front_instance->saveClients();
        break;
    case 2:
        std::cout << "Insira o novo senha: ";
        std::cin >> newPassword;
        front_instance->updateClientsPassword(login, newPassword);
        front_instance->saveClients();
        break;
    case 3:
        std::cout << "Insira o novo plano: ";
        std::cin >> newPlan;
        front_instance->updateClientsPlan(login, newPlan);
        front_instance->saveClients();
        break;
    default:
        std::cout << "Entrada inválida." << std::endl;
        break;
    }

}