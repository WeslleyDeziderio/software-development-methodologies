#ifndef ELECTRICBIKEMODELFACTORY_HPP
#define ELECTRICBIKEMODELFACTORY_HPP

#include "../../../model/ElectricBike.hpp"
#include "BikeModelFactory.hpp"

class ElectricBikeModelFactory : public BikeModelFactory {
public:
    ElectricBikeModelFactory();
    ~ElectricBikeModelFactory();
    Bike* createBike(std::unordered_map<std::string, double>a) override;
};

#endif