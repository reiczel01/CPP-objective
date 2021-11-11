#include <iostream>

using namespace std;

class personalData
{
private:
  string* tablica = new string;
  string name;
  string lastName;
  string streat;
  string streatNumber;
  int zipCode;
  long int personalIdNumber;
public:
  int id;

  personalData()
  {
    name = NULL;
    lastName = NULL;
    streat = NULL;
    streatNumber = NULL;
    zipCode = NULL;
    personalIdNumber = NULL;
  }
  personalData(int i){
    id = i;
  }
  void create();
  void edit();
  void delete();
};
