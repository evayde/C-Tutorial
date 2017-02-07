/** Agenda
  *  - Exercise 4 (Difficult):
  *    Write a program to print the length and content of the longest line using arrays 
  *    (You may have to limit the max amount of characters).
**/
#include<stdio.h>
#include<string.h>

void main() {
  int c, currLine = 0, maxLine = 0, i;
  char currLineContent[100] = {'\0'}, maxLineContent[100] = {'\0'};

  while( (c = getchar()) != EOF ) {
    if( c != '\n' ) {
      currLineContent[currLine] = c;
      currLine++;
    }
    else {
      if( currLine > maxLine ) {
        maxLine = currLine;
        // Update the array
        /* Possibility 1:
        for(i = 0; i <= maxLine; i++)
          maxLineContent[i] = currLineContent[i];
        */
        // Possibility 2:
        strncpy(maxLineContent, currLineContent, 100);
      }
      currLine = 0;
    }
  }

  printf("The longest line has %d characters, it is: %s \n", maxLine, maxLineContent);
}