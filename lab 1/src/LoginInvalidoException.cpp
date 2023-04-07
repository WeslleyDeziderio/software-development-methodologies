#include "../include/LoginInvalidoException.hpp"

InvalidLoginException::InvalidLoginException() {
}

InvalidLoginException::~InvalidLoginException() {

}

std::string InvalidLoginException::what() {
    return InvalidLoginMessage;
}

