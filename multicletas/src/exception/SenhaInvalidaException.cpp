#include "../../include/exception/SenhaInvalidaException.hpp"

InvalidPasswordException::InvalidPasswordException() throw() {}

InvalidPasswordException::~InvalidPasswordException() throw() {}

std::string InvalidPasswordException::what() {
    return InvalidPasswordMessage;
}
