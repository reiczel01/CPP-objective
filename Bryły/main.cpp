#include <iostream>
#include <memory>
#include "bryla.h"

int main()
{ 
    std::shared_ptr<Bryla> prost = std::make_shared<Prost>(4,5,8,10);
    std::shared_ptr<Bryla> kula = std::make_shared<Kula>(4);
    std::shared_ptr<Bryla> ostr = std::make_shared<Ostr>(20,30,10);

    std::cout <<"Prostopadłościan: " <<" OBJ: " <<prost->obj() << " Pole: " << prost->pole() << " Przekątna: " << prost->prze() << std::endl;
    std::cout <<"Kula: " <<" OBJ: " <<kula->obj() << " Pole: " << kula->pole() << " Przekątna: " << kula->prze() << std::endl;
    std::cout <<"Ostrosłup: " <<" OBJ: " <<ostr->obj() << " Pole: " << ostr->pole() << std::endl;

    return 0;
}