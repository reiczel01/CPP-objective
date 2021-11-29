#ifndef MY_CLASS
#define MY_CLASS

#include <string>

using namespace std;
class OverloadConst{
    private:
    int intiger;
    char character;
    string plainText;
    const int newIntiger;
    const int newIntiger2;

    public:
    
    char getCharacter();
    void setCharacter(char character);

    int getIntiger();
    void setIntiger(int intiger);

    string getPlainText();
    void setPlainText(string plainText);

    const int getNewIntger();

    const int getNewIntger2();

    OverloadConst(int _intiger, char _character, string _plainText, int _newIntiger, int _newIntiger2);


};
#endif