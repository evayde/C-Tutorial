/** Agenda
  *  - Übungsaufgabe 1 (einfach):
  *    Schreiben Sie ein Programm, welches mit Hilfe von sizeof die Größe der Datentypen int, float und char ausgibt.
**/
#include<stdio.h>

void main() {
  printf("Ein Int ist %d Byte gross \n", sizeof(int)); // 4 Byte
  printf("Ein float ist %d Byte gross \n", sizeof(float)); // 4 Byte
  printf("Ein char ist %d Byte gross \n", sizeof(char)); // 1 Byte
  
  printf("Die Zahl %f ist %d Byte gross, die Zahl %f ist %d Byte gross\n", 0.33f, sizeof(0.33f), 0.33, sizeof(0.33));
  printf("Ein double ist %d Byte gross\n", sizeof(double)); // 8 Byte

  printf("Der char 'a' ist %d Byte gross \n", sizeof('a'));
}