#include <iostream>
#include "opornik.h"

int main()
{
    Opornik opornik1(3);
    Opornik opornik2(4);

    Opornik rez = opornik1*opornik2;

    std::cout << opornik1 << std::endl;
        std::cout << rez << std::endl;
}