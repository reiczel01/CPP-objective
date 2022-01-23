#include <iostream>

#include "class.h"

int main()
{
    //Templet<float> f_float(30);
    Templet<int> f_int(12);

    // std::cout << "-------------------------------- float" << std::endl;

    // f_float.display();
   
    // std::cout << "Podaj wartość elementu do odlanezienia: ";
    // float value_to_find;
    // std::cin >> value_to_find;
    // f_float.find_element_by_value(value_to_find);

    std::cout << "-------------------------------- int" << std::endl;
    f_int.display();
    f_int.sort();
    std::cout << "-------------------------------- int" << std::endl;
    f_int.display();


    std::cout << "Podaj wartość elementu do odlanezienia: ";
    int value_to_find_int;
    std::cin >> value_to_find_int;
    f_int.find_element_by_value(value_to_find_int);


    return 0;
}