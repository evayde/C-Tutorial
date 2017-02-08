/** Agenda
  *  - Get to know: Functions
  *  - correct signature of the entry point
**/
#include<stdio.h>

int countUserInput() {
  int c, count = 0;

  while( (c = getchar()) != EOF )
    count++;

  return count;
}

int main( int argc, char **argv ) {
  int count = 0;

  count = countUserInput();

  printf("Total character count: %d\n", count);

  return 0; // No Error.
}