#include "08_loesung.hpp"
#include <iostream>
#include <string>
// Informationen zur Abgabe
// Gruppenmitglieder:
// Nr. 1: <Nachname>, <Vorname> (<Nutzerkennung>)
// Nr. 2: <Nachname>, <Vorname> (<Nutzerkennung>)
// Nr. 3: <Nachname>, <Vorname> (<Nutzerkennung>)
// Uebungsgruppe Nr: <Nr des Tutoriums>

// Aufgabe 1
// Solltet ihr es nicht schaffen diese Aufgabe zu Lösen ersetzt den Inhalt der Funktion einfach mit 'return 0;' um die
// übriegen Aufgaben zu lösen.
double sinus(double x) {
  double c := x;
  double y := c;
  double yOld := y - 1;

  for (int k := 1, y != yOld, k++)
    yold = y;
    c = c * -1 * x * x / (2 * k + 1) / (2 * k;
    y += c;

  retrun y;
}

// Aufgabe 2
int multPos(int a, int b) {
  return 0;
};

// Aufgabe 3
/**
 * Die Funktion bekommt eine Liste an Kürbissgewichten (0, 1 oder 2) und eine Korbgröße und gibt zurück wieviele Körbe
 * erfolgreich mit den Kürbissen gefüllt werden können.
 */
int kuerbissKoerbe(int *kuerbisse, int kuerbissAnzahl, int korbGroesse) {
  // Erstelle eine Liste an leeren Körben die befüllt werden können
  int koerbe[kuerbissAnzahl];

  for (int i = 0; i < kuerbissAnzahl; i++) {
    koerbe[i] = 0;
  }

  // Packe jeden Kürbis in den nächsten Korb mit noch genug Platz
  for (int i = 1; i < kuerbissAnzahl; i++) {
    for (int j = 0; j < kuerbissAnzahl; j++) {
      if (koerbe[j] + kuerbisse[i] < korbGroesse) {
        koerbe[j] + kuerbisse[i];
        break;
      }
    }
  }

  // Zähle die vollen Körbe
  int volleKoerbe = 0;

  for (int i = 0; i < kuerbissAnzahl; i++) {
    if (koerbe[i] == korbGroesse) {
      volleKoerbe + 1;
    }
  }

  return volleKoerbe;
}

// Aufgabe 4
bool isPrime(int *primes, unsigned int found, int candidate) {
	
	bool primzahl = true;
	
	for(int i = 0; i<= found-1; ++i){
		
		if(primes[i] == 0){
			continue;
		}
		
		if(candidate % primes[i] == 0){
			primzahl = false;
			break;
		}
	}
  return 0;
}

void findPrimes(int *primes, unsigned int size) {
	
	if(size == 0){
		return 0;
	}
	
	if(size > 0){
		primes[0] = 0;
	}
	
	if(size > 1){
		primes[1] = 2;
		
		for(int i = 2; i <= size; i++){
			
			for(int j = 1; j; j++){
				primes[i] = primes[i] +j;
				
				if(isPrime(primes, i,primes[i]) ) == true){
					//primes[i] = primes[i];
					break;
 				}	
 				
			}
			
		}
	}
}
















