/** Agenda
  *  - Funktionen kennenlernen
  *  - Korrekte Signatur der main-Funktion kennenlernen
  *  - Wall zur Fehlerkorrektur
**/
#include<stdio.h>

int multSum( int fak1, int fak2, int sum1 ) {
  return fak1*fak2+sum1;
}

int main( int argc, char **argv ) {
  int a = 2, b = 5, c = 7;

  printf("Das Ergebnis aus a*b+c ist %d\n", multSum(a,b,c));

  return 0; // 0 = Kein Fehler
}