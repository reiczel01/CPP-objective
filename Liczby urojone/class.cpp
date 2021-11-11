#include <iostream>
#include "class.h"
using namespace std;


    Complex Complex :: addComplexNumber(Complex C1, Complex C2)
    {

        Complex res; // rezultat obiektu klasy Complex

        // dodawanie części rzeczywistej liczby zespolonej
        res.real = C1.real + C2.real;

        // dodawanie części urojonej liczby zespolonej
        res.imaginary = C1.imaginary + C2.imaginary;

        // zwracanie sumy
        return res;
    }

    Complex Complex :: subComplexNumber(Complex C1, Complex C2)
    {

        Complex res; // rezultat obiektu klasy Complex

        // Odejmowanie części rzeczywistej liczby zespolonej
        res.real = C1.real - C2.real;

        // Odejmowanie części urojonej liczby zespolonej
        res.imaginary = C1.imaginary - C2.imaginary;

        // zwracanie rużnicy
        return res;
    }

    Complex Complex :: devComplexNumber(Complex C1, Complex C2)
    {

        Complex res; // rezultat obiektu klasy Complex
        if(C1.real == 0 || C1.imaginary == 0
          || C2.real == 0 || C2.imaginary == 0) // sprawdzanie czy nie zachodzi dzielenie przez zero
          {
            cout << "ERROR: dzielenie przez zero" << endl;
            exit(0);
          }
        // Dzielenie części rzeczywistej liczby zespolonej
        res.real = C1.real / C2.real;

        // Dzielenie części urojonej liczby zespolonej
        res.imaginary = C1.imaginary / C2.imaginary;

        // zwracanie ilorazu
        return res;
    }
    Complex Complex :: mulComplexNumber(Complex C1, Complex C2)
    {

        Complex res; // rezultat obiektu klasy Complex

        // dodawanie części rzeczywistej liczby zespolonej
        res.real = C1.real * C2.real;

        // dodawanie części urojonej liczby zespolonej
        res.imaginary = C1.imaginary * C2.imaginary;

        // zwracanie iloczyn
        return res;
    }
