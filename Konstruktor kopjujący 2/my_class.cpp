#include <iostream>

#include "my_class.h"

using namespace std;

int OverloadConst::getIntiger()
{
    return this->intiger;
}

void OverloadConst::setIntiger(int intiger)
{
    this->intiger = intiger;
}

char OverloadConst::getCharacter()
{
    return this->character;
}

void OverloadConst::setCharacter(char character)
{
    this->character = character;
}

string OverloadConst::getPlainText()
{
    return this->plainText;
}

void OverloadConst::setPlainText(string plainText){
    this->plainText = plainText;
}

const int OverloadConst::getNewIntger(){
    return this->newIntiger;
}

const int OverloadConst::getNewIntger2(){
    return this->newIntiger2;
}

OverloadConst::OverloadConst(int _intiger, char _character, string _plainText, int _newIntiger, int _newIntiger2) : newIntiger(_newIntiger), newIntiger2(_newIntiger2)
{
    setIntiger(_intiger);
    setCharacter(_character);
    setPlainText(_plainText);

    cout << "Wywołano konstruktor przeciążony z parametrem int, char, string" << endl;
    cout << "Zmienna int ma wartosć: " << getIntiger() << endl;
    cout << "Zmienna char ma wartosć: " << getCharacter() << endl;
    cout << "Zmienna string ma wartosć: " << getPlainText() << endl;
    cout << "Zmienna typu const z listy inicjalizacyjnej: " << getNewIntger() << endl;
    cout << "Zmienna typu const z listy inicjalizacyjnej 2: " << getNewIntger2() << endl;

}



