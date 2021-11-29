#ifndef BOSS
#define BOSS

#include <string>
#include <iostream>

#include "worker.h"

class Boss: public Worker{
private:
int countOfWorkers;
std::string typeOfMenagment;
float aditionsToSalary;

public:

Boss(){}

Boss(std::string _name, std::string _lastName, long int _nip, Date _date, float _salary, std::string _department, int _countOfWorkers, std::string _typeOfMenagment, float _aditionsToSalary) : 
    name(_name), lastName(_lastName), nip(_nip), data(_date), salary(_salary), department(_department), department(_department), countOfWorkers(_countOfWorkers), typeOfMenagment(_typeOfMenagment), aditionsToSalary(_aditionsToSalary){}

virtual void printData(){ 
    Worker:printData();
    std::cout << countOfWorkers << std::endl;
}

};

#endif