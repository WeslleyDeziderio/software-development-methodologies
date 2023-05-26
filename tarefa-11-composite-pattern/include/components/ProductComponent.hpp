#ifndef PRODUCTCOMPONENT_HPP
#define PRODUCTCOMPONENT_HPP

#include <iostream>
#include <vector>

class ProductComponent {
public:
    virtual double getPrice() = 0;
    virtual void add(ProductComponent* product);
    virtual void remove(ProductComponent* product);
};

#endif // PRODUCTcOMPONENT_HPP