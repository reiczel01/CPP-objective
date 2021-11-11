#ifndef RODO_H
#define RODO_H
#include <iostream>

using namespace std;

class PersonalData
{
private:
  string name;
  string lastName;

  string getLastName() { return this->lastName; }
  void setLastName(string lastName) { this->lastName = lastName; }

  string streat;

  string getStreat() { return this->streat; }

  string streatNumber;

  string getStreatNumber() { return this->streatNumber; }
  void setStreatNumber(string streatNumber)
  {
    this->streatNumber = streatNumber;
  }

  int zipCode;

  int getZipCode() { return this->zipCode; }
  void setZipCode(int zipCode) { this->zipCode = zipCode; }

  long int personalIdNumber;

  string getName() { return this->name; }
  void setName(string name) { this->name = name; }

public:
  PersonalData(string name, string lastName, string streat, string streatNumber,
               int zipCode, long int personalIdNumber)
  {

    this->name = name;
    this->lastName = lastName;
    this->streat = streat;
    this->streatNumber = streatNumber;
    this->zipCode = zipCode;
    this->personalIdNumber = personalIdNumber;
    zipCode = 0;
    personalIdNumber = 0;
  }
  void display();

  void setStreat(string streat) { this->streat = streat; }
  
  long int getPersonalIdNumber() { return this->personalIdNumber; }
  void setPersonalIdNumber(long int personalIdNumber)
  {
    this->personalIdNumber = personalIdNumber;
  }
};
#endif