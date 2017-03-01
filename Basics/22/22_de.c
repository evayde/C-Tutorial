/** Agenda
  *  - Pointer kennenlernen
  *  - NULL-Pointer
**/
#include<stdio.h>

int main(int argc, char **argv) {
  int *a_ptr = NULL;

  printf("Der Pointer a zeigt auf die Speicheradresse %p \n", a_ptr);

  if( a_ptr ) { // 0 = false, {x | x != 0} = true
    printf("Der Pointer ist initialisiert\n");
  }

  return 0;
}