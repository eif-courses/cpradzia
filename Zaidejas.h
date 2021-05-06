//
// Created by Marius on 5/6/2021.
//

#ifndef CPRADZIA_ZAIDEJAS_H
#define CPRADZIA_ZAIDEJAS_H
#include <iostream>
using namespace std;

class Zaidejas {
private:
  string vardas;
public:
  Zaidejas(const string &vardas);

  const string &GetVardas() const;
};


#endif //CPRADZIA_ZAIDEJAS_H
