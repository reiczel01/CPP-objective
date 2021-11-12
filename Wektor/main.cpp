#include "my_vector.h"

#include <iostream>
using namespace std;
int MyVector::numberOfInstance;
int main(){
MyVector vector1({0,0}, {2,5});
MyVector vector2({0,0}, {-4,-1});

vector1.addVector(vector2);

vector1.display();

cout << vector1.getNumberOfInstances() << "|" << vector2.getNumberOfInstances() << endl; 

return 0;
}