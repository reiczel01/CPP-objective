#include <iostream>
#include "rodo.h"
 using namespace std;

int main()
{
  int size, operation;
  operation = 0;

  cout << "Podaj rozmiar tablicy:" << endl;
  cin >> size;
int* tab;
tab = new (int)personalData [size];

  while(operation != 4)
  {
  cout << "Co chcesz zrobić" << endl;
  cout << "1 - Dodaj dane osobowe" << endl
       << "2 - Edytuj dane osobowe" << endl
       << "3 - Usuń dane osobowe" << endl
       << "4 - Zakończ program" << endl
       << ": " << endl;
  cin >> operation;
  switch(operation)
    {
      case 1:
        for(int i = 0; i <= size; i++)
        {
          personalData tablica();
          personalData create();
        }
        break;

      case 2:
        personalData edit;
        break;

      case 3:
        personalData delete();
        break;

      case 4:
        delete [] tablica;
        return 0;
        break;

    }
  }
}
