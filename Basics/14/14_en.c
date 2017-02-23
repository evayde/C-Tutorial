/** Agenda
  *  - Get to know: Functions
  *  - correct signature of the entry point
  *  - Wall for debugging
**/
#include<stdio.h>

int productSum( int prod1, int prod2, int sum ) {
  return prod1*prod2+sum;
}

int main( int argc, char **argv ) {
  int a = 3, b = 5, c = 7;
  
  printf("a * b + c equals %d\n", productSum(a,b,c) );

  return 0; // 0 means No Error.
}