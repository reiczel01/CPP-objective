#include <iostream>

#include "class.h"
#include "worker.h"
#include "boss.h"
using namespace std;


int main(){

Worker os1("tom", "don", 243756756, {12,3,2011}, 3122456, "development");

Boss bos1("tom", "don", 243756756, {12,3,2011}, 3122456, "development", 100, "d", 15);

 os1.printData();
 bos1.printData();


    return 0;
}