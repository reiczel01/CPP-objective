#ifndef MY_CLASS
#define MY_CLASS

#include <iostream>

template <typename Type >
class Templet
{
private:

void swap(Type *x, Type *y) 
{ 
    Type temp = *x; 
    *x = *y; 
    *y = temp; 
} 

public:
    Type* array = nullptr;
    int num_of_elements;


    Templet (int num_of_elements)
    {

        this->num_of_elements = num_of_elements;
        array = new Type[num_of_elements];
        if(array == nullptr)
        {
            std::cout << "Błąd alokacji" << std::endl;
            
        }
        srand (time(NULL));
        int n = 0;
        while(n < num_of_elements)
        {
            array[n] = rand();
            n++;
        }
    }


    void sort()
    {
        int n = num_of_elements;
        int i, j; 
        for (i = 0; i < n-1; i++)
        {     
            for (j = 0; j < n-i-1; j++)
            {
                if (array[j] > array[j+1]) 
                {
                    swap(&array[j], &array[j+1]);
                }
            } 
        }
            

    }
    
    void display()
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

    
    
};

#endif
