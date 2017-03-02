/** Agenda
  *  - Exercise 9 (easy):
  *    How much memory is needed for a pointer (hint: make use of the sizeof function). 
  *    Is the required memory depending on the datatype (int, double, char)? 
  *    Why is that?
**/
#include<stdio.h>

int main(int argc, char **argv) {
  printf("the int pointer requires %d (%d) Bytes\n", sizeof(int *), sizeof(int) );
  printf("the double pointer requires %d (%d) Bytes\n", sizeof(double *), sizeof(double) );
  printf("the char pointer requires %d (%d) Bytes\n", sizeof(char *), sizeof(char) );

  return 0;
}