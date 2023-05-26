#include "../../include/components/ProductLeaf.hpp"

ProductLeaf::ProductLeaf(std::string name, double price) {
    this->name = name;
    this->price = price;
}

double ProductLeaf::getPrice() {
    return price;
}