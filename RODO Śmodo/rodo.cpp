#include <iostream>

#include "rodo.h"

using namespace std;

void PersonalData :: display() {
  cout << "Imie: " << name << endl;
  cout << "Nazwisko: " << lastName << endl;
  cout << "Ulica: " << streat << endl;
  cout << "Numer domu: " << streatNumber << endl;
  cout << "Kod pocztowy: " << zipCode << endl;
  cout << "Pesel: " << personalIdNumber << endl;
}
