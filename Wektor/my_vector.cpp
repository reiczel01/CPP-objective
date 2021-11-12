#include "my_vector.h"

#include <iostream>

using namespace std;

MyVector::MyVector(){numberOfInstance = ++numberOfInstance;
};

MyVector::MyVector(Point start, Point stop) {
  this->start = start;
  this->stop = stop;
  numberOfInstance = ++numberOfInstance;
}

MyVector::~MyVector() { cout << "zadanie wykonane" << endl; }

int MyVector::getNumberOfInstances(){
    return numberOfInstance;
}

void MyVector::addVector(const MyVector &vectorToAdd) {
  start.x += vectorToAdd.start.x;
  start.y += vectorToAdd.start.y;
  stop.x += vectorToAdd.stop.x;
  stop.y += vectorToAdd.stop.y;
}

void MyVector::subVector(const MyVector &vectorToSub) {
  start.x -= vectorToSub.start.x;
  start.y -= vectorToSub.start.y;
  stop.x -= vectorToSub.stop.x;
  stop.y -= vectorToSub.stop.y;
}

void MyVector::display() {
  cout << start.x << " " << start.y << endl;
  cout << stop.x << " " << stop.y << endl;
}

int MyVector::dotProductVector(const MyVector &vectorToDot) {
  int vx = stop.x - start.x;
  int vy = stop.y - start.y;

  int ux = vectorToDot.stop.x - vectorToDot.start.x;
  int uy = vectorToDot.stop.y - vectorToDot.start.y;

  return (vx * ux) + (vy * uy);
}