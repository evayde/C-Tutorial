/** Agenda
  *  - exercise 5 (easy):
  *    Write a program to convert upper-case letters to lower-case letters of a given string using a function.
**/
#include<stdio.h>

char lower(char x) {
  if(x >= 'A' && x <= 'Z')
    return x - 'A' + 'a';
  return x;
}

int main(int argc, char **argv) {
  char string[] = "Hello World!"; // => hello world!
  int i = 0;

  for(; string[i] != '\0'; i++)
    string[i] = lower(string[i]);

  printf("%s \n", string);

  return 0;
}