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
    static int nextId;

public:
    BikeController();
    virtual ~BikeController();
    virtual void registerBike(std::unordered_map<std::string, double> a);
    virtual void findBike(std::string id);
    virtual void editBike(std::string id, double newPrice);
    virtual void deleteBike(std::string id);  
    virtual void listAllBikes();    
    virtual void saveBikes();
    virtual void loadBikes();
};

#endif // BIKECONTROLLER_HPP