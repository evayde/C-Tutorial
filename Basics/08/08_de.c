/** Agenda
  *  - Anwenden von Wissen: Zeilen zählen.
**/
#include<stdio.h>

void main() {
  int c, zeilen;

  /*
  while( (c = getchar()) != EOF )
    if( c == '\n' )
      zeilen++; // zeilen = zeilen + 1;
  */

  for(zeilen = 0; (c = getchar()) != EOF;)
    if( c == '\n' )
      zeilen++; // zeilen = zeilen + 1;

  printf("Der Nutzer hat %d Zeilen uebermittelt \n", zeilen);

}