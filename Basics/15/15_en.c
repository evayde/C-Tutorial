/** Agenda
  *  - Get to know: Functions
  *  - Understand prototypes
  *  - include external files
**/
#include<stdio.h>
#include "15_en.h"

int main(int argc, char **argv) {
  printf("a+b equals %d\n", calc(5,6) );
  
  return 0;
}

int calc(int a, int b) {
  return a+b;
}