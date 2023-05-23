#include "../../include/controller/BikeController.hpp"

ManageBike manageBike;

ManageBike::ManageBike() {}

ManageBike::~ManageBike() {}

void ManageBike::registBike(std::string type) {
    std::cout << "Bike list\n"
                << "Urban\n"
                << "Mountain\n"
                << "Couple\n"
    << std::endl;
    std::cout << "What kind of byke do you want to create?" << std::endl;
    std::cin >> type;

    if (type == "urban" || type == "Urban") {
        ptrBike = new UrbanBike();
    }
    else if (type == "mountain" || type == "Mountain") {
        ptrBike = new MountainBike();
    } else {
        std::cout << "Invalid entry!" << std::endl;
        ptrBike = NULL;
    }
}

void ManageBike::findBike(){

}

void ManageBike::editBike(){

}

void ManageBike::deleteBike(){

}

void ManageBike::listAllBikes(){

}