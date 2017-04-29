/** Agenda
  *  - Get to know: Unions
**/
#include<stdio.h>

int main(int argc, char **argv) {
  union {
    int i;
    float f;
  } u;

  u.f = 3.14159f;
  // IEEE 754
  printf("Hexadecimal integer representation: %08x\n", u.i);

  union {
    int i;
    char c;
  } u2;

  u2.i = 65;
  printf("Char: %c\n", u2.c);

  return 0;
}