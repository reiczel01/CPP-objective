#include <stdio.h>

#include "my_class.h"

using namespace std;

int main(){
    OverloadConst objest1;
    OverloadConst objest2(1);
    OverloadConst object3(2, 'a');
    OverloadConst objest4(4,'b',"hellow world");
    return 0;
}