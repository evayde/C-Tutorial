/** Agenda
  *  - Pointer kennenlernen
**/
#include<stdio.h>

int main(int argc, char **argv) {
  // Pointer deklarieren
  int *int_ptr; // int-pointer
  char *char_ptr; // char-pointer

  // Pointer wert zuweisen
  // int_ptr = 1; <- Fehler
  int a = 1;
  int_ptr = &a; // int_ptr zeigt auf a

  printf("Der Wert von int_ptr ist %d\n", *int_ptr);
  printf("Der Wert von a ist %d\n", a);
  // printf("Der Wert von &a ist %d\n", &a); // Speicheradresse

  return 0;
}