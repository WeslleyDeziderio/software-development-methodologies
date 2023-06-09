#ifndef URBANBIKECONTROLLER_HPP
#define URBANBIKECONTROLLER_HPP

#include <vector>
#include "../model/UrbanBike.hpp"
#include "BikeController.hpp"

class UrbanBikeController : public BikeController {
public:
    UrbanBikeController();
    virtual ~UrbanBikeController();
    void registerBike(std::unordered_map<std::string, double> aux) override;
    void findBike(std::string id) override;
    void editBike(std::string id, double newPrice) override;
    void deleteBike(std::string id) override;
    std::string createUrbanBikeId();
    void saveBikes() override;
    void loadBikes() override;
};

#endif // URBANBIKECONTROLLER_HPP