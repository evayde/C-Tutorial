/** Agenda
  *  - Struct kennenlernen
  *  - Ein Struct deklarieren
  *  - Die Größe eines Structs kennenlernen
  *  - Werte zuweisen
**/
#include<stdio.h>
#include<string.h>

int main(int argc, char **argv) {
  struct struct1 {
    int nr;
    double a;
    char name[20];
  };

  struct struct1 a;
  a.nr = 1;
  strncpy(a.name, "Hallo", 20);

  printf("Struct1 (a): Nr %d Name %s \n", a.nr, a.name);

  struct struct1 b = {2, 2.5, "Welt"};

  printf("Struct1 (b): Nr %d Name %s \n", b.nr, b.name);

  printf("Sizeof Struct1 %d\n", sizeof(struct struct1));

  return 0;
}