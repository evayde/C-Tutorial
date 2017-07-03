/** Agenda
  *  - Übung 11 (einfach):
  *    Vorbereitung auf komplexe Datenstrukturen.
  *    Erkennen von Problemen. 
  *    Treffen von Vorüberlegungen.
  *    Später: Entwickeln geeigneter Lösungen. 
**/
#include<stdio.h>

int main(int argc, char **argv) {
  typedef struct {
    int id;
    char name[50];
  } Person;

  /** Struct
    *   - Wert: Person
    *   - Verweis auf die nächste Person
    *
    * Modell:
    *   | Person, Nächste --> | Person, Nächste --> | Person, Nächste | | |
    **/
  Person personen[] = {{1, "Hans"}, {2, "Peter"}};

  return 0;
}