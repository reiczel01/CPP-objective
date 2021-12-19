#include <iostream>
#include "kondesator.h"

int main()
{
    Kondesator kondesator1(3);
    Kondesator kondesator2(4);

    Kondesator cop = kondesator1*kondesator2;

    std::cout << kondesator1 << std::endl;
        std::cout << cop << std::endl;
}