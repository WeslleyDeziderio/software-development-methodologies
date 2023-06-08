#include "../../include/model/Bike.hpp"

Bike::Bike() {}

Bike::Bike(double price, std::string id){
    setBikePrice(price);
    setId(id);
}

Bike::~Bike() {}


void Bike::setBikePrice(double price){
    this->price=price;
}

double Bike::getBikePrice(){
    return price;
}

void Bike::setId(std::string id) {
    this->id = id;
}

std::string Bike::getId() {
    return id;
}