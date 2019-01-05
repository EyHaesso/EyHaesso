#include "08_loesung.hpp"
#include <iostream>
#include <string>
using namespace std;

#include <string>

int main() {

  // Aufgabe 1
  cout << endl;
  cout << "Aufrufe der Funktionen aus Aufgabe 1" << endl;
  cout << "------------------------------------" << endl;
  cout << "sinus(6) = " << sinus(6) << endl;

  // Aufgabe 2
  try {
    cout << "multPos(3, 0) = " << multPos(3, 0) << endl;
    cout << "multPos(312344, 1238787) = " << multPos(312344, 1238787) << endl;
    cout << "multPos(-1, -123) = " << multPos(-1, -123) << endl;
  } catch (MultiplicationError e) {
    cout << "Fehler bei der Berechnung der Multiplikation: " << e.message << endl;
  }

  // Aufgabe 3
  int size = 10;
  int kuerbisse[10] = {0, 2, 1, 1, 2, 1, 2, 0, 0, 0};
  int koerbe = kuerbissKoerbe(kuerbisse, size, 3);
  cout << "kuerbissKoerbe(kuerbisse, 10, 3) = " << koerbe << endl;

  // Aufgabe 4
  cout << "Primzahlen" << endl;
  unsigned int N = 100;
  int primes[N];
  for (int i = 0; i < N; i++)
    primes[i] = 0;

  findPrimes(primes, N);
  cout << "Die ersten " << N << " Primzahlen sind: " << endl;
  for (int i = 0; i < N; i++)
    cout << primes[i] << " ";
  cout << endl << endl;

  return 0;
}
