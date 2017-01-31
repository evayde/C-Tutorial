/** Agenda
  *  - Datentyp 'char' verstehen
  *  - Arrays kennenlernen
  *  - Besonderes Array: char-Array
**/
#include<stdio.h>

void main() {
    /* Schreibweise 1
    int a[4];
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    a[3] = 4;
    */

    /* Schreibweise 2
    int a[] = {10,20,30,40};
    printf("An der Position 0 befindet sich eine %d \n", a[0]);
    */

    char c1[] = {'H', 'a', 'l', 'l', 'o', '\0'};
    char c2[] = "Hallo Welt!"; // = {'H', 'a', 'l', 'l', 'o', ..., '\0'};
    //printf("An der Position 2 befindet sich ein %c \n", c[2]);
    printf("Zeichenkette: %s \n", c1); // s steht für 'string' = Zeichenkette
}