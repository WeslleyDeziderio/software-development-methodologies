#ifndef BikeController_HPP
#define BikeController_HPP

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

#include "../model/Bike.hpp"
#include "../model/UrbanBike.hpp"
#include "../model/MountainBike.hpp"

class Bike;
class BikeController {
protected:
    std::unordered_map<std::string, Bike*> bikeMap;

public:
    BikeController();
    virtual ~BikeController();
    virtual void registerBike(std::string type);
    virtual void putBikeIds();
    virtual void findBike(std::string id);
    virtual void editBike(std::string id, double newPrice);
    virtual void deleteBike(std::string id);  
    virtual void listAllBikes();    
};

#endif // BIKECONTROLLER_HPP