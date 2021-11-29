#ifndef WORKER
#define WORKER

#include <string>
#include <iostream>

#include "class.h"

class Worker{
public:
std::string name;
std::string lastName;
long int nip;
Date date;
float salary;
std::string department;

public:

Worker(){}

Worker(std::string _name, std::string _lastName, long int _nip, Date _date, float _salary, std::string _department): 
    name(_name), lastName(_lastName), nip(_nip), date(_date), salary(_salary), department(_department){}

virtual void printData(){ 
    std::cout << name << std::endl;
}

};

#endif