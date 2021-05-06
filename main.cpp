#include <iostream>
#include <vector>
#include "Zaidejas.h"
#include "Treneris.h"

using namespace std;
// Strukturnis programavimas
// Struktura ivesti i programavima

// objektinis -> siusti zinute tarp objektu
// Bankas Zmogus <- zinuciu apsikeitimas tarp objektu

// Funkcinis programavimas
// matematinis mastymas

int sumuoti(int x, int y){
  return x + y;
}

string vardas(string vard){
  return vard;
}

string pavarde(string pav){
  return pav;
}

void spaudintiVardaPavarde(string a, string b){
  cout << vardas(a) <<" "<< pavarde(b) << endl;
}

double taikomePVM(double alga){
  return alga * 0.21;
}
double pavedimasIPensijuFonda(double suma, double procentas){
  return suma * procentas;
}
double skaiciuojamProcentaUzOvertime(double suma, double procentas){
  return suma * procentas;
}

void atlyginimas(double pajamos){
  double pritaikytasPVM = taikomePVM(pajamos);
  double pensijuFondoMokestis = pavedimasIPensijuFonda(pritaikytasPVM, 0.03);
  double overtime = skaiciuojamProcentaUzOvertime(pensijuFondoMokestis, 0.1);
  double visopervesta = pajamos - pritaikytasPVM - pensijuFondoMokestis + overtime;

  cout << "Pradines pajamos: " << pajamos <<"eur" << endl;
  cout << "Po pritaikyto PVM: -" << pritaikytasPVM << "eur" <<endl;
  cout << "Perversta i pensiju fonda: -" << pensijuFondoMokestis << "eur" << endl;
  cout << "Virsvalandziu gauta suma +" << overtime << "eur" << endl;
  cout << "Uzdarbis: +" << visopervesta << "eur" << endl;
}

int main() {

  vector<Zaidejas> zaidejai;

  Zaidejas sabonis("Arvydas Sabonis");
  Zaidejas jesikevicius("Sarunas Jasikevicius");
  Zaidejas kurtinaitis("Rimas Kurtinaitis");
  Zaidejas chomicius("Valdas Chomicius");
  Zaidejas paulauskas("Modestas Paulauskas");

  zaidejai.emplace_back(sabonis);
  zaidejai.emplace_back(jesikevicius);
  zaidejai.emplace_back(kurtinaitis);
  zaidejai.emplace_back(chomicius);
  zaidejai.emplace_back(paulauskas);

  string vardas;
  cout << "Sukurkite savo treneri" << endl;
  cout <<"Iveskite jo varda:";
  getline(cin, vardas);
  Treneris treneris(vardas);
  cout << "Sveikiname jusu treneris: " << treneris.GetVardas() << " sukurtas!" << endl;


  treneris.SudarytiKomanda(zaidejai);

  cout << "MANO KOMANDOS NARIAI:" << endl;
  for(auto it: treneris.GetKomanda().GetZaidejai()){
    cout << it.GetVardas() << endl;
  }
  cout << "Narius skaicius: " << treneris.GetKomanda().GetZaidejai().size() << " nariai" << endl;








  return 0;
}
