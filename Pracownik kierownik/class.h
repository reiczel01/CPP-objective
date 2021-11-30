#ifndef MY_CLASS
#define MY_CLASS


#include <iostream>


//Pracownik oraz Kierownik. Klasa Pracownik powinna posiadać pola: imię, nazwisko, nip, data zatrudnienia, pensja, dział. Klasa Kierownik powinna dziedziczyć po klasie Pracownik oraz posiadać pola: ilość podwładnych, typ kierownictwa, dodatek funkcyjny (wyrażony w procentach)

class Date{
    private:
    int day;
    int month;
    int year;

    public:

    int getDay(){ return day;};

   int getMonth(){ return month;};

   int getYear(){ return year;};

   void setDay(int day){
        this->day = day;
    };

   void setMonth(int month){
        this->month = month;
    }

    void setYear(int year){
        this->year = year;
    }

    Date(){}

    Date(int _day, int _month, int _year):day(_day), month(_month), year(_year){}

    void displayDate(){ 
        std::cout << getDay() << ":" << getMonth() << ":" << getYear() << std::endl;
    }
};

class TempData
{
public:
std::string name;
std::string lastName;
long int nip;
Date date;
float salary;
std::string department;
int countOfWorkers;
std::string typeOfMenagment;
float aditionsToSalary;

TempData(){};

};

#endif