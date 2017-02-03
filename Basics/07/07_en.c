/** Agenda
  *  - for-loop
  *  - while-loop as a special for-loop
  *  - Function: getchar(), to count characters
**/
#include<stdio.h>

void main() {
  int c, count;

  /**
  while( getchar() != EOF )
    count++; // equals: count = count + 1;
  **/

  for(count = 0; (c = getchar()) != EOF; count++)
    if(c == '\n' || c == ' ') // || = OR, && = AND
      count--; // equals: count = count - 1;
  
  printf("You have entered %d characters\n", count);
}