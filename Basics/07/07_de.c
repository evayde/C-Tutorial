/** Agenda
  *  - for-Schleife
  *  - while-Schleife als Spezialfall der for-Schleife
  *  - Funktion: getchar(), um Zeichen zu zählen
**/
#include<stdio.h>

void main() {
  int c, zeichen;

  /**
  while( getchar() != EOF )
    zeichen++; // entspricht: zeichen = zeichen + 1;
  **/

  for(zeichen = 0; (c = getchar()) != EOF; zeichen++)
    if(c == '\n' || c == ' ') // || = ODER, && = UND
      zeichen--; // entspricht: zeichen = zeichen - 1;

  printf("Es wurden %d Zeichen eingegeben.\n", zeichen);
}