/** Agenda
  *  - Exercise 10 (easy):
  *    Declare a char-pointer and initialize it directly with a string value
  *    Declare a char-array and initialize it with a string value
  *    Declare another char-pointer let it point to the first index of the char array
  *
  *    Print out all 3 string values
  *
  *    Try to alter the value of the first index, does it work for all arrays? Why not?
**/
#include<stdio.h>

int main(int argc, char **argv) {
  char *char1 = "Hello World!"; // ROM - read only memory
  char char2[] = "Hello World!";
  char *char3 = &char2[0];

  printf("%s\n%s\n%s\n", char1, char2, char3);

  char2[0] = 'A';
  char3[0] = 'B';
  // char1[0] = 'C'; // Illegal memory access
  char1 = "Test Test Test";

  printf("%s\n%s\n%s\n", char1, char2, char3);

  while(*char1 != '\0') {
    printf("%c\n", *char1);
    *char1++;
  }

  return 0;
}