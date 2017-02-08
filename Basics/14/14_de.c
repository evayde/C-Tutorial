/** Agenda
  *  - Funktionen kennenlernen
  *  - Korrekte Signatur der main-Funktion kennenlernen
**/
#include<stdio.h>

int zaehleZeichen() {
  int c, anzahl = 0;
 
  while( (c = getchar()) != EOF ) {
    anzahl++;
  }

  return anzahl;
}

int main( int argc, char **argv ) {
  int anzahl = 0;

  anzahl = zaehleZeichen();

  printf("Es gibt insgesamt %d Zeichen!\n", anzahl);

  return 0; // 0 = Kein Fehler
}