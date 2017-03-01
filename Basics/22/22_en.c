/** Agenda
  *  - get to know: Pointers
  *  - NULL-Pointer
**/
#include<stdio.h>

int main(int argc, char **argv) {
  int *a_ptr = NULL;

  printf("The memory adress of a_ptr is %p\n", a_ptr);

  if( a_ptr ) { // 0 = false, {x | x != 0} = true
    printf("a_ptr is initialized \n");
  }

  return 0;
}