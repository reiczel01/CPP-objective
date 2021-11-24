#include <iostream>

#include "my_class.h"

using namespace std;

int main(){
    OverloadConst objest1;
    OverloadConst objest2(1);
    OverloadConst object3(2, 'a');
    OverloadConst objest4(4,'b',"hellow world");

    OverloadConst object5 = objest4; //nie jawny kontsruktor kopjujący

    OverloadConst object6(object5); // jawny konstruktor kopjujący

    objest2 = object3; //przypisanie

    cout << "test: " << object5.getPlainText() << endl;
    cout << "test jawny: "<< object6.getPlainText() << endl;
    cout << "test przypisania: " << objest2.getCharacter() << endl;
    return 0;
}