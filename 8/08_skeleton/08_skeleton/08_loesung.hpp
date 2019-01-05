// 08_loesung.h
// Informationen zur Abgabe
// Gruppenmitglieder:
// Nr. 1: <Nachname>, <Vorname> (<Nutzerkennung>) (<Matrikelnummer>)
// Nr. 2: <Nachname>, <Vorname> (<Nutzerkennung>) (<Matrikelnummer>)
// Nr. 3: <Nachname>, <Vorname> (<Nutzerkennung>) (<Matrikelnummer>)
// Uebungsgruppe Nr: <Nr des Tutoriums>

#include <string>

// Aufgabe 1: Zahlenkette
double sinus(double x);
int multPos(int a, int b);
int kuerbissKoerbe(int *kuerbisse, int kuerbissAnzahl, int korbGroesse);
bool isPrime(int *primes, unsigned int found, int candidate);
void findPrimes(int *primes, unsigned int size);

class MultiplicationError {
public:
  MultiplicationError(std::string msg) {
    message = msg;
  };
  std::string message;
};
