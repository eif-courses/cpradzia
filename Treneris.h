//
// Created by Marius on 5/6/2021.
//

#ifndef CPRADZIA_TRENERIS_H
#define CPRADZIA_TRENERIS_H
#include <iostream>
#include "Komanda.h"

using namespace std;

class Treneris {
private:
  string vardas;
  Komanda komanda;
public:
  Treneris(const string &vardas);
  const string &GetVardas() const;
  const Komanda &GetKomanda() const;

  void SudarytiKomanda(vector<Zaidejas> zaidejai);
};


#endif //CPRADZIA_TRENERIS_H
