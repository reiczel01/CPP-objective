#ifndef MY_CLASS
#define MY_CLASS

#include <iostream>

template <typename Type >
class Fibonacci
{
public:
    Type* array = nullptr;
    int num_of_elements;
    Fibonacci (int num_of_elements)
    {
        this->num_of_elements = num_of_elements;
        array = new Type[num_of_elements];
        int n = 0;
        while(n < num_of_elements)
        {
            if(n == 0)
            {
                array[n] = 0;
            }
            else if (n == 1)
            {
                array[n] = 1;
            }
            else
            {
                array[n] = array[n-1] + array[n-2];
            }

            n++;
        }
    }
    
    void display_fibonacci()
    {
        int n = 0;
        while(n < num_of_elements)
        {
            std::cout << "element nr." << n << " : " << array[n] << std::endl;
            n++;
        }
        
    }

    void find_element_by_value(Type value)
    {
        int n = 0;
        bool value_found = false;
        while(n < num_of_elements)
        {
            if(array[n] == value)
            {
                std::cout << "index tego elementu to: " << n << std::endl;
                value_found = true;
                break;
            }
            n++;
        }
        if(value_found == false)
        {
            std::cout << "nie znaleziono wartości" << std::endl;
        }
    }

        void find_element_by_index(int index)
    {

        if(index < num_of_elements)
        {
            std::cout << "wartość tego elementu to: " << array[index] << std::endl;
        }

    }
    
};

#endif
