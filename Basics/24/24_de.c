/** Agenda
  *  - Übungsaufgabe 8 (einfach):
  *    Deklarieren Sie 2 verschiedene Pointer
  *      * Die Pointer sollen auf 2 verschiedene int Werte zeigen
  *      * Addieren Sie diese Werte mit Hilfe der Pointer zusammen und geben Sie diese aus.
**/
#include<stdio.h>

int main(int argc, char **argv) {
  int a = 3, b = 5;
  int *a_ptr = &a, *b_ptr = &b;

  int c = *a_ptr + *b_ptr;

  printf("Das Ergebnis ist %d\n",c);

  return 0;
}