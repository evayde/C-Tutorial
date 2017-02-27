/** Agenda
  *  - Exercise 3 (medium):
  *    Write a program that counts all letters from a-z (treat a-z and A-Z as same), store their occurrences in an Array and print them out using printf().
**/
#include<stdio.h>

void main() {
  int c, i;
  int letters[26] = {0}; // init all array values with 0

  while( (c = getchar()) != EOF ) {
    if( c >= 'a' && c <= 'z' )
      letters[(c - 'a')]++;
    if( c >= 'A' && c <= 'Z' )
      letters[(c - 'A')]++;
  }

  printf("Letter count:\n");
  for(i = 0; i < 26; i++)
    printf("Letter %c occurs %d times.\n", i+'a', letters[i] );
}