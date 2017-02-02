/** Agenda
  *  - while-loop
  *  - function: getchar()
  *  - End of File, EOF
**/
#include<stdio.h>

void main() {
    int c;

    while( (c = getchar()) != EOF ) { // EOF = -1 = CTRL+Z / CTRL+D
        printf("The character is: %c \n",c);
    }

    printf("Some other code of our program\n");
}