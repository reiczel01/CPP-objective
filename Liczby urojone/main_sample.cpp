// Prosty kalkulator liczb zespolonych
#include <iostream>
#include "class.h"
using namespace std;

// Funkcja Main
int main()
{
    double r, k;

    cout << "Podaj pierwsza liczbe zespolona" << endl;
    cout << "Podaj czesc rzeczywista: " << endl;
    cin >> r;
    cout << "Podaj czesc urojona bez przedrostak i: " << endl;
    cin >> k;
    cout << endl;
    // Pierwsza liczba zespolona
    Complex C1(r, k);

    cout << "Podaj druga liczbe zespolona" << endl;
    cout << "Podaj czesc rzeczywista: " << endl;
    cin >> r;
    cout << "Podaj czesc urojona bez przedrostak i: " << endl;
    cin >> k;
    cout << endl;
    // Druga liczba zespolona
    Complex C2(r, k);

    // wyświetlanie pierwszej liczby zespolonej
    cout << "Liczba zespolona nr 1 : " << C1.real
         << " + i" << C1.imaginary << endl;
    // wyświetlanie drugiej liczby zespolonej
    cout << "Liczba zespolona nr 2 : " << C2.real
         << " + i" << C2.imaginary << endl;
    cout << endl;

    // wyświetlanie i wybieranie typu daiłania
    int type_of_operation;
    cout << "Dodawanie   - 1" << endl;
    cout << "Odejmowanie - 2" << endl;
    cout << "Dzielenie   - 3" << endl;
    cout << "Mnorzenie   - 4" << endl;
    cout << endl;
    cout << "Wybrana operacja: ";
    cin >> type_of_operation;
    cout << endl;
    // tworzenie miejsca do przechowywania wyniku
    Complex C3;

    switch (type_of_operation) {
      case 1:
          // wywoływanie metody addComplexNumber()
          C3 = C3.addComplexNumber(C1, C2);

          // wyświetlanie sumy
          cout << "Suma liczb zespolonych wynosi : "
               << C3.real << " + i"
               << C3.imaginary;

          cout << endl
               << endl;
          break;
      case 2:
          // wywoływanie metody subComplexNumber()
          C3 = C3.subComplexNumber(C1, C2);

          // wyświetlanie rużnicy
          cout << "Odejmowanie liczb zespolonych wynosi: "
               << C3.real << " + i"
               << C3.imaginary;

          cout << endl
               << endl;
          break;
      case 3:
          // wywoływanie metody devComplexNumber()
          C3 = C3.devComplexNumber(C1, C2);

          // wyświetlanie ilorazu
          cout << "Dzielenie liczb zespolonych wynosi : "
               << C3.real << " + i"
               << C3.imaginary;

          cout << endl
               << endl;
          break;
      case 4:
          // wywoływanie metody mulComplexNumber()
          C3 = C3.mulComplexNumber(C1, C2);

          // wyświetlanie iloczynu
          cout << "Mnożenie liczb zespolonych wynosi : "
               << C3.real << " + i"
               << C3.imaginary;

          cout << endl
               << endl;
               break;
        default :
          // wyświetlanie błędu braku poprawnego wyboru
            cout << "ERROR: "
                 << "Liczba z poza zakresu operacji" << endl;
            break;
    }


}
