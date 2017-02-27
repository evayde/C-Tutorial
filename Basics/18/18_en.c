/** Agenda
  *  - Exercise 6 (easy):
  *    Write a program that converts following datatypes:
  *     6.1: int to float
  *     6.2: string to int, "1234" => 1234
**/
#include<stdio.h>

int stringToInt(char x[]) {
  int a = 0, i = 0;

  while( x[i] != '\0' ) {
    /** Example for "1234"
    1. Loop
     a = 0 + 1 = 1
    2. Loop
     a = 10 + 2 = 12
    3. Loop
     a = 120 + 3 = 123
    4. Loop
     a = 1230 + 4 = 1234
    **/
    if(x[i] >= '0' && x[i] <= '9')
      a = (a * 10) + (x[i] - '0');
    i++;
  }

  return a;
}

int main(int argc, char **argv) {
  // 6.1
  int a = 42;
  float b = a;

  // 6.2
  char string[] = " 12 34 ";
  int c = stringToInt(string);

  printf("a = %d, b = %.2f, string = %s, c = %d\n", a,b,string,c);

  return 0;
}