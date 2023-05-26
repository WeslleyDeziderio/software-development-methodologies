#include "../../include/components/ProductComposite.hpp"

void ProductComposite::add(ProductComponent* product) {
    children.push_back(product);
}

void ProductComposite::remove(ProductComponent* product) {
    auto it = std::find(children.begin(), children.end(), product);
    if (it != children.end())
        children.erase(it);
}

double ProductComposite::getPrice() {
    double sum = 0;

    for (auto child : children) {
        sum += child->getPrice();
    }

    return sum;
}
