#ifndef MANAGERCONTROLLER_HPP
#define MANAGERCONTROLLER_HPP

#include "../../include/model/Manager.hpp"

class ManagerController {
public:
    ManagerController();
    ~ManagerController();
    void createEstablisment();
    void retrieveEstablishment();
    void deleteEstablisment();
    void updateEstablishment();
};

#endif // MANAGERCONTROLLER_HPP