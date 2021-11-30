#include <iostream>

#include "class.h"
#include "worker.h"
#include "boss.h"
using namespace std;


int main(){

    int tempAction = 0;
    int checkOfInput = 0;
    

    

    TempData tempData;

    std::cout << "Kogo chcesz dodać Pracownika - 1 czy Kierownika - 2: ";
    while (checkOfInput != 0) 
    {
    switch(tempAction)
        {
            case 1:
            std::cout << "Imie: ";
            std::cin >> tempData.name;

            std::cout << "Nazwisko: ";
            std::cin >> tempData.lastName;

            std::cout << "NIP: ";
            std::cin >> tempData.nip;

            std::cout << "Data utworzenia: " << std::endl;
            std::cout << "Dzień: ";
            std::cin >> tempData.date.setDay();
            std::cout << "Miesiąc: ";
            std::cin >> tempData.date.setMonth();
            std::cout << "Rok: ";
            std::cin >> tempData.date.setYear();

            std::cout << "Płaca: ";
            std::cin >> tempData.salary;

            std::cout << "Dział: ";
            std::cin >> tempData.department;
            
            Worker worker(tempData.name, tempData.lastName, tempData.nip, {tempData.date.getDay(),tempData.date.getMonth(),tempData.date.getYear()}, 
            tempData.salary, tempData.department);

            worker.printData();
            checkOfInput = 1;
            break;

            case 2:
            std::cout << "Imie: ";
            std::cin >> tempData.name;

            std::cout << "Nazwisko: ";
            std::cin >> tempData.lastName;

            std::cout << "NIP: ";
            std::cin >> tempData.nip;

            std::cout << "Data utworzenia: " << std::endl;
            std::cout << "Dzień: ";
            std::cin >> tempData.date.setDay();
            std::cout << "Miesiąc: ";
            std::cin >> tempData.date.setMonth();
            std::cout << "Rok: ";
            std::cin >> tempData.date.setYear();

            std::cout << "Płaca: ";
            std::cin >> tempData.salary;

            std::cout << "Dział: ";
            std::cin >> tempData.department;

            std::cout << "Ilość pracowników: ";
            std::cin >> tempData.countOfWorkers;

            std::cout << "Typ kierownictwa: ";
            std::cin >> tempData.typeOfMenagment;

            std::cout << "Dodatek funkcyjny: ";
            std::cin >> tempData.aditionsToSalary;

            Boss boss(tempData.name, tempData.lastName, tempData.nip, {tempData.date.getDay(),tempData.date.getMonth(),tempData.date.getYear()}, 
            tempData.salary, tempData.department, tempData.countOfWorkers, tempData.typeOfMenagment, tempData.aditionsToSalary);
            
            boss.printData();
            checkOfInput = 1;
            break;

            default:

            std::cout << "Wybrałeś nieprawidłową opcję";
            checkOfInput = 0;
            break;
        }

    }
    

    }

    return 0;
}