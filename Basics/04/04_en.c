/** Agenda
  *  - get to know 'char' datatype
  *  - first special thing about 'char' datatype
**/
#include<stdio.h>

void main() {
    char a = 'A';
    int x = a;
    char b = x+1;

    printf("The variable a holds the character %c and is represented by %d, x+1 = %c \n", a, x, b);
}