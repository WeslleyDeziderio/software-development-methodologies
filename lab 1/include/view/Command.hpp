#ifndef COMMAND_HPP
#define COMMAND_HPP

#include "../../include/controller/FrontController.hpp"
#include "string"

class Command {
private:
protected:
public:
    Command();
    virtual ~Command();
    virtual void execute();
};

#endif