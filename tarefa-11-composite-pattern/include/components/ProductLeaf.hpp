#ifndef PRODUCTLEAF_HPP
#define PRODUCTLEAF_HPP

#include "ProductComponent.hpp"
#include <string>

class ProductLeaf : public ProductComponent {
private:
    std::string name;
    double price;

public:
    ProductLeaf(std::string name, double price);
    double getPrice() override;
};

#endif // PRODUCTLEAF_HPP