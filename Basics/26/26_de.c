/** Agenda
  *  - Übungsaufgabe 10 (einfach):
  *    Deklarieren Sie einen Char Pointer und weisen Sie diesem direkt einen Wert zu.
  *    Deklarieren Sie außerdem ein Char-Array mit dem gleichen Wert und 
  *    Deklarieren Sie einen char Pointer der auf den ersten Index des Arrays zeigt
  *
  *    Geben Sie alle 3 Strings aus
  *
  *    Versuchen Sie nun die Werte der Arrays zu ändern, geht es bei allen Arrays? Warum?
**/
#include<stdio.h>

int main(int argc, char **argv) {
  char *char1 = "Hallo Welt!"; // ROM - read only memory
  char char2[] = "Hallo Welt!";
  char *char3 = &char2[0];

  printf("%s\n%s\n%s\n", char1, char2, char3);

  char2[0] = 'A';
  char3[0] = 'B';
  // Nicht erlaubt: char1[0] = 'C';
  char1 = "Test Test Test";

  printf("%s\n%s\n%s\n", char1, char2, char3);

  while(*char1 != '\0') {
    printf("%c\n", *char1);
    *char1++;
  }

  return 0;
}