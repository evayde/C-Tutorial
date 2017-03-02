/** Agenda
  *  - Übungsaufgabe 9 (einfach):
  *    Finden Sie heraus wie viel Speicher ein Pointer benotigt (Tipp: Benutzen Sie dafur
  *    wieder sizeof). Ändert sich der benötigte Speicher je nach Datentyp (int, double, char)? Warum ist das
  *    so?
**/
#include<stdio.h>

int main(int argc, char **argv) {
  printf("Ein int-Pointer benötigt %d (%d) Byte Speicher\n", sizeof(int *), sizeof(int));
  printf("Ein double-Pointer benötigt %d (%d) Byte Speicher\n", sizeof(double *), sizeof(double));
  printf("Ein char-Pointer benötigt %d (%d) Byte Speicher\n", sizeof(char *), sizeof(char));

  return 0;
}