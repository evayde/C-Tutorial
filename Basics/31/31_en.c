/** Agenda
  *  - Exercise 11 (easy):
  *    Preparing complex datatypes.
  *    Recognizing problems.
  *    Preliminary considerations.
  *    Later: Develop a solution.
**/
#include<stdio.h>

int main(int argc, char **argv) {
  typedef struct {
    int id;
    char name[50];
  } Person;

  /** List
    *  | Person, Next --> | Person, Next --> | Person, Next | | |
  **/
  Person persons[] = {{1, "Hans"}, {2, "Peter"}};

  return 0;
}