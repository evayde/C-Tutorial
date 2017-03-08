/** Agenda
  *  - Structs kennenlernen
  *  - typedef kennenlernen
**/
#include<stdio.h>
#include<string.h>

int main(int argc, char **argv) {
  typedef struct {
    int nr;
    char name[20];
    double gehalt;
  } Personal;

  // typedef struct Personal Personal;
  Personal p1 = {1, "Max", 1200.00}, p2;

  p2.nr = 2;
  strncpy(p2.name, "Moritz", 20);
  p2.gehalt = 1300.00;

  Personal p3 = {3, "Thomas", 1900.00};

  printf("Person1 heisst %s und bekommt monatlich %.2f EUR\n", p1.name, p1.gehalt);
  printf("Person2 heisst %s und bekommt monatlich %.2f EUR\n", p2.name, p2.gehalt);
  printf("Person3 heisst %s und bekommt monatlich %.2f EUR\n", p3.name, p3.gehalt);

  /** Typedef Nutzung
  typedef int Integer;
  Integer a = 13;

  printf("Integer a hat den Wert %d\n", a);
  **/

  return 0;
}