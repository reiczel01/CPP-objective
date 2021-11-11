#include <iostream>
#include "rodo.h"

using namespace std;

personalData :: viod create()
{
  cout << "Podaj imie: ";
  cin >> personalData.imie;
  cout << endl;

  cout << "Podaj nazwisko: ";
  cin >> personalData.lastName;
  cout << endl;

  cout << "Podaj ulicę: ";
  cin >> personalData.streat;
  cout << endl;

  cout << "Podaj numer domu: ";
  cin >> personalData.streatNumber;
  cout << endl;

  cout << "Podaj kod pocztowy: ";
  cin >> personalData.zipCode;
  cout << endl;

  cout << "Podaj PESEL: ";
  cin >> personalData.personalIdNumber;
  cout << endl;
}

personalData :: void edit()
{
  if(personalData.name != NULL &&
  personalData.lastName != NULL &&
  personalData.streat != NULL &&
  personalData.streatNumber != NULL &&
  personalData.zipCode != NULL &&
  personalData.personalIdNumber != NULL &&
  personalData.id > 0)
    {
    cout << "Podaj imie: ";
    cin >> personalData.imie;
    cout << endl;

    cout << "Podaj nazwisko: ";
    cin >> personalData.lastName;
    cout << endl;

    cout << "Podaj ulicę: ";
    cin >> personalData.streat;
    cout << endl;

    cout << "Podaj numer domu: ";
    cin >> personalData.streatNumber;
    cout << endl;

    cout << "Podaj kod pocztowy: ";
    cin >> personalData.zipCode;
    cout << endl;

    cout << "Podaj PESEL: ";
    cin >> personalData.personalIdNumber;
    cout << endl;
    }
  else
    {
    cout << "ERROR - próbujesz edytować nieistniejące dane" << endl;
    }
  }

  personalData :: void delete()
  {
    personalData.id = NULL
    personalData.name = NULL;
    personalData.lastName = NULL;
    personalData.streat = NULL;
    personalData.streatNumber = NULL;
    personalData.zipCode = NULL;
    personalData.personalIdNumber = NULL;
  }
