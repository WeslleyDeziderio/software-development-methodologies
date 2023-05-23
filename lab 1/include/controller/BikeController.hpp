#ifndef MANAGEBIKE_HPP
#define MANAGEBIKE_HPP

#include <iostream>
#include <vector>
#include <string>

#include "../model/Bike.hpp"
#include "../model/UrbanBike.hpp"
#include "../model/MountainBike.hpp"

class ManageBike {
private:
    Bike* ptrBike;
public:
    ManageBike();
    virtual ~ManageBike();
    void putBikeIds();
    void registBike(std::string type);
    void findBike();
    void editBike();
    void deleteBike();  
    void listAllBikes();    

};

#endif