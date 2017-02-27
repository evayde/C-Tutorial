/** Agenda
  *  - Exercise 7 (easy):
  *    Write a program that is able to calculate the result of the 4 basic mathematic operations (+,-,*,/) using floats.
  *    Prototype: float calculate(float a, float b, char op);
**/
#include<stdio.h>

float calculate(float a, float b, char op) {
  if(op == '+')
    return a+b;
  else if(op == '-')
    return a-b;
  else if(op == '*')
    return a*b;
  else
    return a/b;
}

int main(int argc, char **argv) {
  
  printf("a+b = %.2f\n", calculate(1.2f, 2.4f, '+'));
  printf("a-b = %.2f\n", calculate(1.2f, 2.4f, '-'));
  printf("a*b = %.2f\n", calculate(1.2f, 2.4f, '*'));
  printf("a/b = %.2f\n", calculate(1.2f, 2.4f, '/'));

  return 0;
}