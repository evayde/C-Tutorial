/** Agenda
  *  - get to know: Pointers
  *  - Pointerarithmetic
**/
#include<stdio.h>

int main(int argc, char **argv) {
  int a[] = {1,2,3,4};
  int *a_ptr = &a[0];
  int i = 0;

  for(; i < 4; i++) {
    printf("%d\n", *a_ptr++ );
  }

  return 0;
}