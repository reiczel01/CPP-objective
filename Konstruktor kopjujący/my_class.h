#ifndef MY_CLASS
#define MY_CLASS

#include <string>

using namespace std;
class OverloadConst{
    private:
    int intiger;
    char character;
    string plainText;

    public:
    
    char getCharacter();
    void setCharacter(char character);

    int getIntiger();
    void setIntiger(int intiger);

    string getPlainText();
    void setPlainText(string plainText);

    OverloadConst();

    OverloadConst(int _intiger);

    OverloadConst(int _intiger,char _character);

    OverloadConst(int _intiger, char _character, string _plainText);

    OverloadConst( const OverloadConst & object );
};
#endif