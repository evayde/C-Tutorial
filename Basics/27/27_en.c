/** Agenda
  *  - Get to know: Structs
  *  - declare a struct
  *  - know the size of a struct
  *  - assign/read values
**/
#include<stdio.h>
#include<string.h>

int main(int argc, char **argv) {
  struct struct1 {
    int nr;
    double dbl;
    char name[20];
  };

  struct struct1 a;
  a.nr = 1;
  strncpy(a.name, "Hello", 20);

  printf("Struct1 (a) Nr: %d, Name: %s\n", a.nr, a.name);

  struct struct1 b = {2, 2.5, "World"};

  printf("Struct1 (b) Nr: %d, Name: %s\n", b.nr, b.name);

  printf("Size of Struct1: %d \n", sizeof(struct struct1));

  return 0;
}