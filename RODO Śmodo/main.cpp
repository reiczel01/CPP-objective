#include "rodo.h"
#include "users.h"
#include <iostream>
using namespace std;

int main() {
  int operation;
  operation = 0;
  Users userData;

  while (operation != 5) {
    cout << "Co chcesz zrobić" << endl;
    cout << "1 - Dodaj dane osobowe" << endl
         << "2 - Edytuj dane osobowe" << endl
         << "3 - Usuń dane osobowe" << endl
         << "4 - Wyswietl dane" << endl
         << "5 - Zakończ program" << endl
         << ": ";
    cin >> operation;
    switch (operation) {
    default:
      cout << "Podana niewłaciwa operacja!!!";
    case 1:
      userData.constructAndAddUser();
      break;

    case 2:
      userData.findAndEditUser();
      break;

    case 3:
      userData.delAndFindUser();
      break;

    case 4:
      userData.displayData();
      break;

    case 5:
      return 0;
      break;
    }
  }
}
