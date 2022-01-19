#include <iostream>

#include "class.h"

int main()
{
    Fibonacci<float> f_float(30);
    Fibonacci<int> f_int(12);
    Fibonacci<long> f_long(15);

    f_float.display_fibonacci();
    std::cout << "Podaj index elementu do odlanezienia: ";
    int index_to_find;
    std::cin >> index_to_find;
    f_float.find_element_by_index(index_to_find);
    std::cout << "Podaj wartość elementu do odlanezienia: ";
    float value_to_find;
    std::cin >> value_to_find;
    f_float.find_element_by_value(value_to_find);

    std::cout << "--------------------------------" << std::endl;
    f_int.display_fibonacci();
    std::cout << "--------------------------------" << std::endl;
    f_long.display_fibonacci();

    return 0;
}