//
// Created by Marius on 5/6/2021.
//

#ifndef CPRADZIA_KOMANDA_H
#define CPRADZIA_KOMANDA_H


#include "Zaidejas.h"
#include <iostream>
#include <vector>
using namespace std;


class Komanda {
private:
  vector<Zaidejas> zaidejai;
public:
  bool Itraukti(const Zaidejas& zaidejas);
  void Atvaizduoti();
  const vector<Zaidejas> &GetZaidejai() const;
};


#endif //CPRADZIA_KOMANDA_H
