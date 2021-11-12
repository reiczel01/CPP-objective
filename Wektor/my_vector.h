#ifndef MY_VECTOR
#define MY_VECTOR

#include "point.h"

class MyVector {
private:
  Point start;
  Point stop;

public:
  static int numberOfInstance;
  MyVector();

  MyVector(Point start, Point end);

  int getNumberOfInstances();

  void addVector(const MyVector &vectorToAdd);

  void subVector(const MyVector &vectorToSub);

  int dotProductVector(const MyVector &vectorToDot);

  void display();

  ~MyVector();
};
#endif
