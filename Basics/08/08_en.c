/** Agenda
  *  - use your knowledge: Count lines
**/
#include<stdio.h>

void main() {
  int c, lines;

  /*
  while( (c = getchar()) != EOF )
    if(c == '\n')
      lines++; // lines = lines + 1;
  */ 

  for( lines = 0; (c = getchar()) != EOF; )
    if(c == '\n')
      lines++;

  printf("Lines received: %d \n", lines);
}