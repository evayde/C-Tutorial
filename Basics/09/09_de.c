/** Agenda
  *  - Konstanten kennenlernen
  *  - Anwenden von Wissen: Wörter zählen.
**/
#include<stdio.h>

// Konstanten: 
#define IMWORT 1
#define AUSWORT 0

void main() {
  int c,
      istWort = AUSWORT, // Boolscher Wert 
      woerter = 0; // Anzahl der Wörter

  /** Was ist ein Wort?
   " abc-def "
   " 2 "
   " . " " , " " - "
  **/

  while( (c = getchar()) != EOF ) {
    if(c == ' ' || c == '\n' || c == '\t') {
      istWort = AUSWORT;
    }
    else {
      if(istWort == AUSWORT)
        woerter++;
      istWort = IMWORT;
    }
  }

  printf("Anzahl der uebergebenen Woerter: %d \n", woerter);
}