#ifndef PRODUCTCOMPOSITE_HPP
#define PRODUCTCOMPOSITE_HPP

#include "ProductComponent.hpp"
#include <list>
#include <iostream>
#include <vector>
#include <algorithm>

class ProductComposite : public ProductComponent {
private:
    std::vector<ProductComponent*> children;
public:
    void add(ProductComponent* product);
    void remove(ProductComponent* product);
    double getPrice();
};

#endif // PRODUCTCOMPOSITE_HPP