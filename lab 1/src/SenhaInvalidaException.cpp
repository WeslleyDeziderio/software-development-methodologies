#include "../include/SenhaInvalidaException.hpp"

InvalidPasswordException::InvalidPasswordException() {

}

InvalidPasswordException::~InvalidPasswordException() {

}

std::string InvalidPasswordException::what() {
    return InvalidPasswordMessage;
}