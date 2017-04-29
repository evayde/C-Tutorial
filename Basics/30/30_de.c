/** Agenda
  *  - Unions kennenlernen
**/
#include<stdio.h>

int main(int argc, char **argv) {
  union {
    int i;
    float f;
  } u;

  u.f = 3.14159f;
  // IEEE 754
  printf("Hexad. Int-Repraesentation: %08x\n", u.i);

  union {
    int i;
    char c;
  } u2;

  u2.i = 65;
  printf("Char Repraesentation: %c\n", u2.c);

  return 0;
}