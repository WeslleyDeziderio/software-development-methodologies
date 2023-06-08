#ifndef MOUNTAINBIKECONTROLLER_HPP
#define MOUNTAINBIKECONTROLLER_HPP

#include <vector>
#include "../model/MountainBike.hpp"
#include "BikeController.hpp"

class MountainBikeController : public BikeController {
public:
    MountainBikeController();
    virtual ~MountainBikeController();
    void registerBike(std::unordered_map<std::string, double> aux) override;
    void findBike(std::string id) override;
    void editBike(std::string id, double newPrice) override;
    void deleteBike(std::string id) override;
    void saveBikes() override;
    void loadBikes() override;
};

#endif // MOUNTAINbIKECONTROLLER_HPP