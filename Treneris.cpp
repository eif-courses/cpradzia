//
// Created by Marius on 5/6/2021.
//

#include "Treneris.h"

Treneris::Treneris(const string &vardas) : vardas(vardas) {}

const string &Treneris::GetVardas() const {
  return vardas;
}

void Treneris::SudarytiKomanda(vector<Zaidejas> nariai) {

  int pasirinkimas = 1;
  while (true) {
    cout << "=====================ZAIDEJAI=================================" << endl;
    cout << "0. Uzdaryti programa!" <<endl;
    for (int i = 0; i < nariai.size(); ++i) {
      cout << (i + 1) << ". " << nariai[i].GetVardas() << endl;
    }
    cout << "=======================================================================" << endl;
    cout << "Pasirinkite zaideja:";
    cin >> pasirinkimas;
    if(pasirinkimas == 0){
      break;
    }
    bool arEgzistuoja = komanda.Itraukti(nariai[pasirinkimas - 1]);

    if(arEgzistuoja){
      cout << nariai[pasirinkimas - 1].GetVardas() << " sekmingai itrauktas i komanda!" << endl;
    }
  }
  komanda.Atvaizduoti();

//  string vardas;
//  cout << "Sukurkite savo treneri" << endl;
//  cout <<"Iveskite jo varda:";
//  getline(cin, vardas);
}

const Komanda &Treneris::GetKomanda() const {
  return komanda;
}
