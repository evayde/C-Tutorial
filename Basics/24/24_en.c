/** Agenda
  *  - Exercise 8 (easy):
  *    Declare 2 different pointers:
  *      * They should point to two different integer values
  *      * add these values and print out the result
**/
#include<stdio.h>

int main(int argc, char **argv) {
  int a = 3, b = 5;
  int *a_ptr = &a, *b_ptr = &b;

  int c = *a_ptr + *b_ptr;

  printf("The result of a+b equals %d \n", c);

  return 0;
}