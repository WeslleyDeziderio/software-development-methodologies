#ifndef COMMANDCLIENTUPDATE_HPP
#define COMMANDCLIENTUPDATE_HPP

#include "../Command.hpp"
#include "string"

class CommandClientUpdate : public Command{
private:
protected:
    FrontController* front_instance;
public:
    CommandClientUpdate();
    virtual ~CommandClientUpdate();
    void execute() override;
};

#endif