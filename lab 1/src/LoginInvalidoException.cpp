#include "../include/LoginInvalidoException.hpp"

InvalidLoginException::InvalidLoginException() throw(){
}

InvalidLoginException::~InvalidLoginException() throw(){
}

std::string InvalidLoginException::what() {
    return InvalidLoginMessage;
}

