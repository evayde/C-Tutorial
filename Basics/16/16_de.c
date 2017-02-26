/** Agenda
  *  - Funktionen kennenlernen
  *  - lokale vs. globale Variablen
  *  - Besseres Verständnis von Variablen
**/
#include<stdio.h>

int b = 3; // Globale Variable

int calc(int a, int c) {
  a++;
  b++;
  return a+b;
}

int main(int argc, char **argv) {
  int a = 5; // Lokale Variable

  /**
  printf("int a hat den Wert %d \n", a);
  printf("int z hat den Wert %d \n", z);
  **/

  /**
  printf("Das Ergebnis aus a+b ist %d\n", calc(a,b) );
  printf("Der Wert der Variable a ist %d \n Der Wert der Variable b ist %d\n", a,b);
  **/

  {
    int c = 10;
    printf("c hat den Wert %d\na+c = %d\n", c, a+c);
  }

  return 0;
}