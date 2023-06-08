#ifndef ELECTRICBIKECONTROLLER_HPP
#define ELECTRICBIKECONTROLLER_HPP

#include <vector>
#include "../model/ElectricBike.hpp"
#include "BikeController.hpp"

class ElectricBikeController : public BikeController {
public:
    ElectricBikeController();
    virtual ~ElectricBikeController();
    void registerBike(std::unordered_map<std::string, double> aux) override;
    void findBike(std::string id) override;
    void editBike(std::string id, double newPrice) override;
    void deleteBike(std::string id) override;
    void saveBikes() override;
    void loadBikes() override;
};

#endif // ELECTRICBIKECONTROLLER_HPP