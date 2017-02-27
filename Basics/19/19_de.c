/** Agenda
  *  - Übungsaufgabe 7 (einfach):
  *    Schreiben Sie ein Programm welches die 4 Grundrechenarten auf Fließkommazahlen mit Hilfe einer Funktion ausführen kann.
  *    Prototyp: float berechne(float a, float b, char op);
**/
#include<stdio.h>

float berechne(float a, float b, char op) {
  if(op == '+')
    return a+b;
  else if(op == '-')
    return a-b;
  else if(op == '*')
    return a*b;
  else 
    return a/b;
}

int main(int argc, char **argv) {

  printf("a+b = %.2f\n", berechne(1.2f, 2.4f, '+'));
  printf("a-b = %.2f\n", berechne(1.2f, 2.4f, '-'));
  printf("a*b = %.2f\n", berechne(1.2f, 2.4f, '*'));
  printf("a/b = %.2f\n", berechne(1.2f, 2.4f, '/'));

  return 0;
}