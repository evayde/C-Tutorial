/** Agenda
  *  - get to know: Pointers
  *  - Call-by-Value vs. Call-by-Reference
**/
#include<stdio.h>

int add(int *);

int main(int argc, char **argv) {
  int a = 42;
  int *a_ptr = &a;

  printf("a equals %d\n", a); // 42

  add(a_ptr);

  printf("a equals %d\n", a); // 42

  return 0;
}

int add(int *a) {
  return (*a)++;
}