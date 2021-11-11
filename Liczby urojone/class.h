#include <iostream>

using namespace std;

class Complex
{
  public:
    double real; // Do przetrzymywania wartości rzeczywistej liczby
    double imaginary; // Do przechowywania liczby urojonej

    Complex()
    {
      real = 0;
      imaginary = 0;
    }

    Complex(double r, double i)
    {
        real = r; // r jest inicjalizowana podczas tworzenia obiektu
        imaginary = i; // i jest inicjalizowana podczas tworzenia obiektu
    }

    Complex addComplexNumber(Complex C1, Complex C2);

    Complex subComplexNumber(Complex C1, Complex C2);

    Complex devComplexNumber(Complex C1, Complex C2);

    Complex mulComplexNumber(Complex C1, Complex C2);
};
