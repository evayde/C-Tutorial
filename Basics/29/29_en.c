/** Agenda
  *  - Get to know: Structs
  *  - Pointer to Structs
  *  - Get to know: malloc()
  *  - Get to know: free()
**/
#include<stdio.h>
// strcpy / strncpy:
#include<string.h>
// malloc / free
#include<stdlib.h>

int main(int argc, char **argv) {
  typedef struct {
    int number;
    char airline[20];
    char from[50];
    char to[50];
  } Flight;

  Flight f1 = {512, "KLM", "Hamburg", "Amsterdam"};
  Flight *f2 = &f1;

  Flight *f3 = malloc( sizeof(Flight) );
  f3->number = 123;
  strncpy(f3->airline, "Norwegian", 20);
  strncpy(f3->from, "Hamburg", 50);
  strncpy(f3->to, "Madrid", 50);

  printf("Flight %d-%s from %s to %s\n", f1.number, f1.airline, f1.from, f1.to);
  // accessing Pointer
  printf("Flight %d-%s from %s to %s\n", f2->number, f2->airline, f2->from, f2->to);
  printf("Flight %d-%s from %s to %s\n", f3->number, f3->airline, f3->from, f3->to);

  free(f3);

  return 0;
}