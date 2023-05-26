#include "../include/components/ProductComponent.hpp"
#include "../include/components/ProductComposite.hpp"
#include "../include/components/ProductLeaf.hpp"

int main(void) {
    ProductLeaf pen("Caneta", 1);
    ProductLeaf smartphone("Smartphone", 1000);
    ProductLeaf tShirt("Camiseta", 40);
    ProductComposite productBox;
    productBox.add(&pen);
    productBox.add(&smartphone);
    productBox.add(&tShirt);

    ProductLeaf tablet("Tablet", 2000);
    ProductLeaf kindle("Kindle", 300);
    ProductComposite anotherProductBox;
    anotherProductBox.add(&tablet);
    anotherProductBox.add(&kindle);
    productBox.add(&anotherProductBox);

    std::cout << productBox.getPrice() << std::endl;

    return 0;
}