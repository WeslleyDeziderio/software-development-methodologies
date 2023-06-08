#ifndef BIKEMODELFACTORY_HPP
#define BIKEMODELFACTORY_HPP

#include "../../../include/model/Bike.hpp"
#include <unordered_map>

class BikeModelFactory {
public:
    BikeModelFactory();
    ~BikeModelFactory();
    virtual Bike* createBike(std::unordered_map<std::string, double> a) = 0; 
};

#endif // BIKEMODELFACTORY_HPP