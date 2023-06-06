#include "../../include/model/Bike.hpp"

Bike::Bike() {}

Bike::Bike(std::string type, double price){
    setBikePrice(price);
    setBikeType(type);
}

Bike::~Bike() {}

void Bike::setBikeType(std::string type){
    this->type=type;
}

void Bike::setBikePrice(double price){
    this->price=price;
}

std::string Bike::getBikeType(){
    return type;
}

double Bike::getBikePrice(){
    return price;
}

void Bike::setId(int id) {
    this->id = id;
}

int Bike::getId() {
    return id;
}