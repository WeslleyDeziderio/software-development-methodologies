#ifndef BikeController_HPP
#define BikeController_HPP

#include <iostream>
#include <vector>
#include <string>

#include "../model/Bike.hpp"
#include "../model/UrbanBike.hpp"
#include "../model/MountainBike.hpp"

class BikeController {
private:
    Bike* ptrBike;
public:
    BikeController();
    virtual ~BikeController();
    void putBikeIds();
    void registBike(std::string type);
    void findBike();
    void editBike();
    void deleteBike();  
    void listAllBikes();    

};

#endif