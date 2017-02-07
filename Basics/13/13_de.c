/** Agenda
  *  - Übungsaufgabe 4 (Schwer):
  *    Schreiben Sie ein Programm, welches die längste Zeile in einer Variable speichert
  *    und ausgibt (Sie müssen ggf. einen Kompromiss machen indem Sie die Anzahl der maximal
  *    erlaubten Zeichen begrenzen).
**/
#include<stdio.h>
#include<string.h>

void main() {
  int c, i, aktuelleZeile = 0, maxZeile = 0;
  char aktuelleZeileInhalt[100] = { '\0' }, maxZeileInhalt[100] = { '\0' };

  while( (c = getchar()) != EOF ) {
    if(c != '\n') {
      aktuelleZeileInhalt[aktuelleZeile] = c;
      aktuelleZeile++;
    } else {
      if(aktuelleZeile > maxZeile) {
        maxZeile = aktuelleZeile;
        // Inhalt des Arrays kopieren
        /** Möglichkeit 1
        for(i = 0; i <= maxZeile; i++)
          maxZeileInhalt[i] = aktuelleZeileInhalt[i];
        **/

        // Möglichkeit 2, benötigt string.h
        strncpy(maxZeileInhalt, aktuelleZeileInhalt, 100);
      }
      aktuelleZeile = 0;
    }
  }

  printf("Die laengste Zeile hat %d Zeichen und lautet: %s\n", maxZeile, maxZeileInhalt);
}