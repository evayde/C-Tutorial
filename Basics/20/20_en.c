/** Agenda
  *  - get to know: Pointers
**/
#include<stdio.h>

int main(int argc, char **argv) {
  // declare a pointer
  int *int_ptr;  // integer pointer
  char *char_ptr; // char pointer

  // Assign a value to a pointer
  // int_ptr = 1; // <- Wrong
  int a = 42;
  int_ptr = &a; // Adress of the variable a: &a

  printf("int_ptr has the value %d\n", int_ptr); // Is the Adress of pointer variable
  printf("int_ptr has the value %d\n", *int_ptr);

  printf("a has the value %d\n", a);
  printf("&a has the value %d\n", &a);

  return 0;
}