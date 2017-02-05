/** Agenda
  *  - Exercise 1 (easy):
  *    Write a program, that outputs the size of the datatypes int, float and char by using the sizeof function.
**/
#include<stdio.h>

void main() {
  printf("Int datatype has a size of %d Bytes\n", sizeof(int));     // 4 B
  printf("Float datatype has a size of %d Bytes\n", sizeof(float)); // 4 B
  printf("Char datatype has a size of %d Bytes\n", sizeof(char));   // 1 B per C definition

  printf("The number %f is %d Bytes big, while %f is %d Bytes big\n", 0.33f, sizeof(0.33f), 0.33, sizeof(0.33));
  printf("Double datatype has a size of %d Bytes\n", sizeof(double) ); // 8 B

  printf("The char 'a' has a size of %d Bytes\n", sizeof('a'));
}