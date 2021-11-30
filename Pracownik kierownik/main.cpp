#include <iostream>

#include "class.h"
#include "worker.h"
#include "boss.h"
using namespace std;


int main(){

    int tempAction = 0;
    Worker temp("tom", "don", 243756756, {12,3,2011}, 3122456, "development");

    Boss tempB("tom", "don", 243756756, {12,3,2011}, 3122456, "development", 100, "d", 15);

    os1.printData();
    bos1.printData();

    std::cout << "Kogo chcesz dodać Pracownika - 1 czy Kierownika - 2: ";

    switch(tempAction)
    {
        case 1:
        std::cout << "Imie: ";
        std::cin >> temp.name;

        std::cout << "Nazwisko: ";
        std::cin >> temp.lastName;

        std::cout << "NIP: ";
        std::cin >> temp.nip;

        std::cout << "Data utworzenia: ";
        std::cin >> temp.date;

        std::cout << "Płaca: ";
        std::cin >> temp.salary;

        std::cout << "Dział: ";
        std::cin >> temp.department;

        break;

        case 2:
        std::cout << "Imie: ";
        std::cin >> tempB.name;

        std::cout << "Nazwisko: ";
        std::cin >> tempB.lastName;

        std::cout << "NIP: ";
        std::cin >> tempB.nip;

        std::cout << "Data utworzenia: ";
        std::cin >> tempB.date;

        std::cout << "Płaca: ";
        std::cin >> tempB.salary;

        std::cout << "Dział: ";
        std::cin >> tempB.department;

        std::cout << "Ilość pracowników: ";
        std::cin >> tempB.countOfWorkers;

        std::cout << "Typ kierownictwa: ";
        std::cin >> tempB.typeOfMenagment;

        std::cout << "Dodatek funkcyjny: ";
        std::cin >> tempB.aditionsToSalary;
        


    }

    return 0;
}