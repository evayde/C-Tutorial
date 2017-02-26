/** Agenda
  *  - Get to know: Functions
  *  - local vs. global variables
  *  - get a better understanding of variables
**/
#include<stdio.h>

int b = 3; // global variable

int calc(int a, int c) {
  a++;
  b++;
  return a+b;
}

int main(int argc, char **argv) {
  int a = 5; // local variable

  /**
  printf("the value of a is %d\n", a);
  printf("the value of b is %d\n", b);
  **/

  /**
  printf("a+b equals %d\n", calc(a,b) );
  printf("a is %d\nb is %d\n", a,b);
  **/

  {
    int c = 5;
    printf("the value of a+c is %d\n", c+a);
  }

  // printf("the value of c is %d\n", c);

  return 0;
}