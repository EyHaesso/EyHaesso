#include "06_loesung.hpp"
#include <iostream>
#include <string>

using namespace std;

int main() {
  // Aufgabe 1
  int size = 10;
  int feld[10] = {1, 3, 2, 6, 4, 5, 8, 7, 9, -1};
  cout << endl;
  cout << "Aufrufe der Funktionen aus Aufgabe 1" << endl;
  cout << "------------------------------------" << endl;
  cout << "Max: " << max(feld, size) << endl;
  cout << "Min: " << min(feld, size) << endl;
  cout << "JustOnce: " << justOnce(feld, size) << endl;
  cout << "Odd: " << odd(feld, size) << endl;
  cout << "Inv: ";
  inv(feld, size);
  for (int i = 0; i < size; i++)
    cout << feld[i] << ", ";
  cout << endl;

  int feld2[10] = {1, 9, 2, 6, 4, 5, 8, 7, 9, -1};
  cout << endl;
  cout << "Aufrufe der Funktionen aus Aufgabe 1" << endl;
  cout << "------------------------------------" << endl;
  cout << "Max: " << max(feld2, size) << endl;
  cout << "Min: " << min(feld2, size) << endl;
  cout << "JustOnce: " << justOnce(feld2, size) << endl;
  cout << "Odd: " << odd(feld2, size) << endl;
  cout << "Inv: ";
  inv(feld2, size);
  for (int i = 0; i < size; i++)
    cout << feld2[i] << ", ";
  cout << endl << endl;

  // Aufgabe 2
  const int size4 = 8192;
  float feld4[size4];
  for (int i = 0; i < size4; i++)
    feld4[i] = 1e-5;
  cout << "Aufrufe der Funktionen aus Aufgabe 2" << endl;
  cout << "------------------------------------" << endl;
  cout << "genauerA: " << genauerA(feld4, size4) << endl;
  cout << "genauerB: " << genauerB(feld4, size4) << endl;
  cout << "genauerC: " << genauerC(feld4, size4) << endl << endl;

  int n = 0, w = 0, z = 0, zahl1, zahl2;
  char input[11];
  // Aufgabe 3

  cout << "Aufrufe der Funktionen aus Aufgabe 3" << endl;
  cout << "------------------------------------" << endl;
  cout << "Geben Sie zwei Zahlen ein die miteinander addiert werden (getrennt durch ein Leerzeichen):" << endl;
  cin >> zahl1 >> zahl2;
  cout << "Ueberlaufstatus (0 = false / 1= true):" << ueberlauf(zahl1, zahl2) << endl << endl;

  // Aufgabe 4
  cout << "Aufrufe der Funktionen aus Aufgabe 4" << endl;
  cout << "------------------------------------" << endl;
  cout << "Geben Sie eine Zahl ein, von der Sie die Fakultaet berechnen wollen:" << endl;
  cin >> n;
  cout << fakultaet(n) << endl << endl;

  // Aufgabe 5
  cout << "Aufrufe der Funktionen aus Aufgabe 5" << endl;
  cout << "------------------------------------" << endl;
  cout << "Geben Sie ein Wort der Laenge 10 ein:" << endl;
  cin >> input;
  charChange(input);
  cout << input << endl << endl;

  // Aufgabe 6
  cout << "Aufrufe der Funktionen aus Aufgabe 6" << endl;
  cout << "------------------------------------" << endl;
  cout << "Geben Sie zwei ganze nicht negative Zahlen ein (getrennt durch ein Leerzeichen: " << endl;
  cin >> w >> z;
  cout << "Der ggT nach dem effizienteren Algorithmus betraegt: " << ggT(w, z) << endl << endl;

  return 0;
}
