#ifndef USERS_H
#define USERS_H

#include <limits>
#include <vector>

#include "rodo.h"

using namespace std;

class Users {
  vector<PersonalData *> usersContainer;

private:
  bool readUserNumericData(long int &number);

public:
  void constructAndAddUser();

  ~Users() {
    for (int i = 0; i < usersContainer.size(); i++) {
      delete usersContainer[i];
    }
  }

  void findAndEditUser();

  void delAndFindUser();

  void displayData();
};
#endif