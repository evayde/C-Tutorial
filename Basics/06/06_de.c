/** Agenda
  *  - while-Schleife
  *  - Funktion: getchar()
  *  - End of File EOF
**/
#include<stdio.h>

void main() {
  int c;

  while( (c = getchar()) != EOF ) { // EOF = -1 = STRG+Z
    printf("Das eingegebene Zeichen ist: %c \n", c);
  }

  printf("Code nach der Schleife \n");
}