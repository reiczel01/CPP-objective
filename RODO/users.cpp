#include <iostream>
#include <limits>
#include <vector>

#include "users.h"

bool Users ::readUserNumericData(long int &number) {
  cin >> number;
  if (cin.fail()) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Podałe nie poprawne dane podaj je jeszcze raz" << endl;
    return false;
  }
  return true;
}

void Users ::constructAndAddUser() {
  string name;
  string lastName;
  string streat;
  string streatNumber;
  long int zipCode = 0;
  long int personalIdNumber = 0;
  cout << "Podaj imie: ";
  cin >> name;

  cout << "Podaj nazwisko: ";
  cin >> lastName;

  cout << "Podaj ulice: ";
  cin >> streat;

  cout << "Podaj numer ulicy: ";
  cin >> streatNumber;

  cout << "Podaj kod pocztowy: ";
  while (1) {
    if (readUserNumericData(zipCode) == true) {
      break;
    }
  }
  cout << "Podaj PESEL: ";
  while (1) {
    if (readUserNumericData(personalIdNumber) == true) {
      break;
    }
  }

  PersonalData *userPtr = new PersonalData(name, lastName, streat, streatNumber,
                                           zipCode, personalIdNumber);

  usersContainer.push_back(userPtr);
}

void Users ::findAndEditUser() {
  long int personalIdNumber = 0;
  cout << "Podaj numer pedel osoby do edycji: ";
  while (1) {
    if (readUserNumericData(personalIdNumber) == true) {
      break;
    }
  }
  for (int i = 0; i < usersContainer.size(); i++) {
    if (usersContainer[i]->getPersonalIdNumber() == personalIdNumber) {
      string temp;
      cout << "Podaj nową ulicę: ";
      cin >> temp;
      usersContainer[i]->setStreat(temp);
      break;
    }
  }
}

void Users ::delAndFindUser() {
  long int personalIdNumber = 0;
  cout << "Podaj numer pedel osoby do usunięcia: ";
  while (1) {
    if (readUserNumericData(personalIdNumber) == true) {
      break;
    }
  }
  for (int i = 0; i < usersContainer.size(); i++) {
      if (usersContainer[i]->getPersonalIdNumber() == personalIdNumber) {
        delete usersContainer[i];
        usersContainer.erase(usersContainer.begin() + i);
        break;
      }
    }
}

void Users ::displayData() {
  for (int i = 0; i < usersContainer.size(); i++) {
    usersContainer[i]->display();
    cout << "--------------------------------------------" << endl;
  }
}
