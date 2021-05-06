//
// Created by Marius on 5/6/2021.
//

#include "Komanda.h"

const vector<Zaidejas> &Komanda::GetZaidejai() const {
  return zaidejai;
}

bool Komanda::Itraukti(const Zaidejas &zaidejas) {
  // TODO patikrinti ar nera dublikatu zaidejai sarase su ivesti zaideju is konsoles
  zaidejai.emplace_back(zaidejas);
  return true;
}

void Komanda::Atvaizduoti() {

  cout << "======================================Komanda===============================" << endl;
  for (const auto &it: zaidejai) {
    cout << it.GetVardas() << endl;
  }
  cout << "===============================================================================" << endl;
}
