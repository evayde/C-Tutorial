/** Agenda
  *  - Exercise 2 (easy):
  *    Write a program, that prints out the total number of newlines, spaces and tabs of a user input.
**/
#include<stdio.h>

#define NEWLINES 0
#define SPACES 1
#define TABS 2

void main() {
  int c;
  int count[] = {0,0,0}; // 0 - newlines, 1 - spaces, 2 - tabs

  while( (c = getchar()) != EOF ) {
    if( c == '\n' )
      count[NEWLINES]++;
    else if( c == ' ' )
      count[SPACES]++;
    else if( c == '\t' )
      count[TABS]++;
  }

  printf("There are %d newlines, %d spaces and %d tabs in the given text\n", count[NEWLINES], count[SPACES], count[TABS]);
}