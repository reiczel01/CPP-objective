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

OverloadConst :: OverloadConst()
{
    setIntiger(0);
    setCharacter(0);
    setPlainText("");

    cout << "Wywołano konstruktor domyslny" << endl;
}

OverloadConst::OverloadConst(int _intiger)
{
    setIntiger(_intiger);
    setCharacter(0);
    setPlainText("");

    cout << "Wywołano konstruktor przeciążony z parametrem int" << endl;
    cout << "Zmienna ma wartosć: " << getIntiger() << endl;
}

OverloadConst::OverloadConst(int _intiger, char _character)
{
    setIntiger(_intiger);
    setCharacter(_character);
    setPlainText("");

    cout << "Wywołano konstruktor przeciążony z parametrem int, char" << endl;
    cout << "Zmienna int ma wartosć: " << getIntiger() << endl;
    cout << "Zmienna char ma wartosć: " << getCharacter() << endl;
}

OverloadConst::OverloadConst(int _intiger, char _character, string _plainText)
{
    setIntiger(_intiger);
    setCharacter(_character);
    setPlainText(_plainText);

    cout << "Wywołano konstruktor przeciążony z parametrem int, char, string" << endl;
    cout << "Zmienna int ma wartosć: " << getIntiger() << endl;
    cout << "Zmienna char ma wartosć: " << getCharacter() << endl;
    cout << "Zmienna string ma wartosć: " << getPlainText() << endl;
}

OverloadConst::OverloadConst(const OverloadConst & object)
{
    setIntiger(object.intiger);
    setCharacter(object.character);
    setPlainText(object.plainText);
    cout << "Wołano konstruktor kopjujący" << endl;
}