#ifndef MANAGEBIKE_HPP
#define MANAGEBIKE_HPP

#include <iostream>
#include <vector>
#include <string>

#include "../model/Bike.hpp"

class ManageBike : public Bike{

public:
    ManageBike();
    ~ManageBike();
//indices dos elementos
    void putBikeIds();


//CRUD
    void registBike();  //criar outro no Facade, nao precisa de exceptions
    void findBike();    //facade devem ser iguais
    void editBike();    //facade
    void deleteBike();  //facade

    void listAllBikes();    
    //facade devem ser iguais -> mudar mensagem para "cadastros não encontrados"


};

#endif