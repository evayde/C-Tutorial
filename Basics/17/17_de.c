/** Agenda
  *  - Übungsaufgabe 5 (einfach):
  *    Schreiben Sie ein Programm, welches mit Hilfe einer Funktion Großbuchstaben eines gegebenen Strings in Kleinbuchstaben umwandelt.
**/
#include<stdio.h>

char lower(char x) {
  if(x >= 'A' && x <= 'Z')
    return x - 'A' + 'a';
  return x;
}

int main(int argc, char **argv) {
  char string[] = "Hallo Welt!"; // hallo welt!
  int i = 0;

  for(; string[i] != '\0'; i++)
    string[i] = lower(string[i]);

  printf("%s", string);

  return 0;
}