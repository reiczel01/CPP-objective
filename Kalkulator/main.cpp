#include <iostream>
#include "count.h"

int main()
{
    int action = 0;
    while(action !=4)
    {
        std::cout << "kalkulator" << std::endl;
        std::cout << "1 - Ststem dziesiętny" << std::endl;
        std::cout << "2 - Ststem dwójkowy" << std::endl;
        std::cout << "3 - Ststem szesnastkowy" << std::endl;
        std::cout << "4 - zakończ" << std::endl;
        std::cout << ": ";
        std::cin >> action;

        switch (action)
        {
        case 1:
        {
            int mOperation = 0;
            std::cout << "1 - dodawanie" << std::endl;
            std::cout << "2 - odejmowanie" << std::endl;
            std::cout << "3 - mnorenie" << std::endl;
            std::cout << "4 - dzielenie" << std::endl;
            std::cout << ": ";
            std::cin >> mOperation;

            if(mOperation == 1)
            {

            }else if (mOperation == 2)
            {

            }else if (mOperation == 3)
            {

            }else if (mOperation == 4)
            {

            }else
            {
                std::cout << "ERROR: niewłaciwa operacja";
            }

            break;
        }
        case 2:
        {
            Bin bin;
            int mOperation = 0;
            std::cout << "1 - dodawanie" << std::endl;
            std::cout << "2 - odejmowanie" << std::endl;
            std::cout << "3 - mnorenie" << std::endl;
            std::cout << "4 - dzielenie" << std::endl;
            std::cout << ": ";
            std::cin >> mOperation;

            if(mOperation == 1)
            {
                bin.add();
            }else if (mOperation == 2)
            {
                bin.sub();
            }else if (mOperation == 3)
            {
                bin.mul();
            }else if (mOperation == 4)
            {

            }else
            {
                std::cout << "ERROR: niewłaciwa operacja";
            }

            break;
        }
        case 3:
        {
            int mOperation = 0;
            std::cout << "1 - dodawanie" << std::endl;
            std::cout << "2 - odejmowanie" << std::endl;
            std::cout << "3 - mnorenie" << std::endl;
            std::cout << "4 - dzielenie" << std::endl;
            std::cout << ": ";
            std::cin >> mOperation;

            if(mOperation == 1)
            {

            }else if (mOperation == 2)
            {

            }else if (mOperation == 3)
            {

            }else if (mOperation == 4)
            {

            }else
            {
                std::cout << "ERROR: niewłaciwa operacja";
            }

            break;
        }
        default:
            break;
        }
    }
    return 0;
}