#ifndef COMMANDCLIENTREGISTER_HPP
#define COMMANDCLIENTREGISTER_HPP

#include "../Command.hpp"


class CommandClientRegister : public Command{
private:
protected:
    FrontController* front_instance;
public:
    CommandClientRegister();
    virtual ~CommandClientRegister();
    void execute() override;
};

#endif