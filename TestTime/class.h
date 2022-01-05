#ifndef MY_CLASS
#define MY_CLASS
#include <iostream>
#include <fstream>


class ReadFile
{
    private:

    public:

    void read(std::string filename)
    {
        std::fstream newfile;
        newfile.open(filename,std::ios::in); //otwieranie pliku do odczytu
        if (newfile.is_open()){   //sprawdzenie czy plik się otworzył
            std::string tp;
            while(getline(newfile, tp)){ //odczytywanie pliku i zapisywanie danych do stringa
                std::cout << tp << "\n"; //wyświetlanie danych
            }
            newfile.close(); //zamykanie pliku

        }
    }

    virtual void VMread(std::string filename)
    {
        std::fstream newfile;
        newfile.open(filename,std::ios::in);
        if (newfile.is_open()){ 
            std::string tp;
            while(getline(newfile, tp)){ 
                std::cout << tp << "\n"; 
            }
            newfile.close(); 
        }
    }
};

class Son : public ReadFile
{

};
#endif