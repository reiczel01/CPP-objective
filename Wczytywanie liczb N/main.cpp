//#include "class.h"

#include <iostream>
#include <list>

void positiveOrNegativeNum(int temp ,std::list<int>& myList)
{
    if(temp<0)
        {
            myList.push_back(temp);
        }
        else
        {
            myList.push_front(temp);

        }
}

int main()
{
    int count = 0;
    
    std::list<int> myList;

    std::cout << "Ile chcesz podać liczb ";
    std::cin >> count;

    for (int i = 0; i < count; i++)
    {
        int temp = 0;
        int temp2 = 0;
        std::cout << "Podajesz parę liczb nr " << i+1 <<":";
        std::cin >> temp >> temp2;

        positiveOrNegativeNum(temp, myList);
        positiveOrNegativeNum(temp2, myList);

        
    }

     for(std::list<int>::iterator i = myList.begin(); i != myList.end(); i++)
        {
            std::cout << *i << std::endl;
        }

    //List list(numbers);
    

}