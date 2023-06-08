#ifndef MOUNTAINBIKEMODELFACTORY_HPP
#define MOUNTAINBIKEMODELFACTORY_HPP

#include "../../../model/MountainBike.hpp"
#include "BikeModelFactory.hpp"

class MountainBikeModelFactory : public BikeModelFactory {
public:
    MountainBikeModelFactory();
    ~MountainBikeModelFactory();
    Bike* createBike(std::unordered_map<std::string, double>a) override;
};

#endif // MOUNTAINbIKEMODELFACTORY_HPP