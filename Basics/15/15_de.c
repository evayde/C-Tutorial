/** Agenda
  *  - Funktionen kennenlernen
  *  - Prototypen verstehen
  *  - Externe Dateien einbinden
**/
#include<stdio.h>
#include "15_de.h"

int main(int argc, char **argv) {
    printf("Das Ergebnis aus a+b = %d\n", calc(5,6) );
    return 0;
}

// Funktionsdeklaration
int calc(int a, int b) {
    return a+b;
}