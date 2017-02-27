/** Agenda
  *  - Pointer kennenlernen
  *  - Call-by-Value vs. Call-by-Reference
**/
#include<stdio.h>

int add(int *);

int main(int argc, char **argv) {
  int a = 42;
  int *a_ptr = &a;

  printf("a hat den Wert %d\n", a);

  add(a_ptr);

  printf("a hat den Wert %d\n", a);

  return 0;
}

int add(int *a) {
  return (*a)++;
}