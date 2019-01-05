// 08_loesung.h
// Informationen zur Abgabe
// Gruppenmitglieder:
// Nr. 1: <Nachname>, <Vorname> (<Nutzerkennung>) (<Matrikelnummer>)
// Nr. 2: <Nachname>, <Vorname> (<Nutzerkennung>) (<Matrikelnummer>)
// Nr. 3: <Nachname>, <Vorname> (<Nutzerkennung>) (<Matrikelnummer>)
// Uebungsgruppe Nr: <Nr des Tutoriums>

// Aufgabe 1: Zahlenkette
int max(int *feld, int size);
int min(int *feld, int size);
void inv(int *feld, int size);
int odd(int *feld, int size);
bool justOnce(int *feld, int size);

// Aufgabe 2: Genauer!
float genauerA(float *feld, unsigned int size);
float genauerB(float *feld, unsigned int size);
float genauerC(float *feld, unsigned int size);

// Aufgabe 3: Überlauf
bool ueberlauf(int x, int y);

// Aufgabe 4: Fakultät
int fakultaet(int n);

// Aufgabe 5: Verschlüsselung
void charChange(char *input);

// Aufgabe6: größter gemeinsamer Teiler
int ggT(int x, int y);
