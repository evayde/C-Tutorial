/** Agenda
  *  - Übungsaufgabe 3 (mittel):
  *    Schreiben Sie ein Programm, welches die einzelnen Buchstaben zählt (a-z und A-Z) und die jeweilige Anzahl in einem Array speichert (ohne Unterscheidung zwischen
  *    Groß- und Kleinbuchstaben). Geben Sie die Anzahl der Buchstaben mittels printf() aus.
**/
#include<stdio.h>

void main() {
  int c, i;
  int buchstaben[26] = {0}; // Alle Werte mit 0 initialisiert

  while( (c = getchar()) != EOF ) {
    if(c >= 'a' || c <= 'z')
      buchstaben[(c - 'a')]++;
    if(c >= 'A' || c <= 'Z')
      buchstaben[(c - 'A')]++;
  }

  printf("Anzahl der einzelnen Buchstaben: \n");
  for(i = 0; i < 26; i++) 
    printf("Buchstabe %c kommt %d mal vor.\n", i+'a', buchstaben[i] );
  
}