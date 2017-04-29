/** Agenda
  *  - Structs kennenlernen
  *  - Pointer auf Structs
  *  - malloc() kennenlernen
  *  - free() kennenlernen
**/
#include<stdio.h>
// Für strncpy / strcpy
#include<string.h>
// Für malloc und free
#include<stdlib.h>

int main(int argc, char **argv) {
  typedef struct {
    int nummer;
    char airline[20];
    char von[50];
    char nach[50];
  } Flug;

  Flug f1 = {512, "KLM", "Hamburg", "Amsterdam"};
  Flug *f2 = &f1;

  Flug *f3 = malloc( sizeof(Flug) );
  f3->nummer = 123;
  strncpy(f3->airline, "Norwegian", 20);
  strncpy(f3->von, "Hamburg", 50);
  strncpy(f3->nach, "Madrid", 50);

  printf("Flug %d-%s von %s nach %s\n", f1.nummer, f1.airline, f1.von, f1.nach);
  // Zugriff auf Pointer-Structs
  printf("Flug %d-%s von %s nach %s\n", f2->nummer, f2->airline, f2->von, f2->nach);
  printf("Flug %d-%s von %s nach %s\n", f3->nummer, f3->airline, f3->von, f3->nach);

  free(f3);

  return 0;
}