#ifndef URBANBIKEMODELFACTORY_HPP
#define URBANBIKEMODELFACTORY_HPP

#include "../../../model/UrbanBike.hpp"
#include "BikeModelFactory.hpp"

class UrbanBikeModelFactory : public BikeModelFactory {
public:
    UrbanBikeModelFactory();
    ~UrbanBikeModelFactory();
    Bike* createBike(std::unordered_map<std::string, double>a) override;
};

#endif // MOUNTAINbIKEMODELFACTORY_HPP