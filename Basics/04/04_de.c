/** Agenda
  *  - Datentyp 'char' verstehen
  *  - Eine erste Besonderheit von 'char' kennenlernen
**/
#include<stdio.h>

void main() {
    char a = 'A';
    int x = a;
    char b = x+1;

    printf("Der Datentypen char speichert einzelne Zeichen als int: a = %c entspricht %d, b = %c \n", a, x, b);
}