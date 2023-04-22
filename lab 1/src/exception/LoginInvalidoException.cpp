#include "../../include/exception/LoginInvalidoException.hpp"

InvalidLoginException::InvalidLoginException() throw() {}

InvalidLoginException::~InvalidLoginException() throw() {}

std::string InvalidLoginException::what() {
    return InvalidLoginMessage;
}

