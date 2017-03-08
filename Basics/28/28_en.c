/** Agenda
  *  - Get to know: Structs
  *  - Get to know: Typedef
**/
#include<stdio.h>
#include<string.h>

int main(int argc, char **argv) {
  typedef struct {
    int nr;
    char name[20];
    double salary;
  } Employee;

  /**
  typedef struct Employee Employee;
  typedef int Integer;
  **/
  
  Employee e1 = {1, "Max", 1200.00}, e2;

  e2.nr = 2;
  strncpy(e2.name, "Thomas", 20);
  e2.salary = 1300.00;

  Employee e3 = {3, "Bill", 1900.00};

  printf("Employee 1 is %s and gets a monthly salary of %.2f\n", e1.name, e1.salary);
  printf("Employee 2 is %s and gets a monthly salary of %.2f\n", e2.name, e2.salary);
  printf("Employee 3 is %s and gets a monthly salary of %.2f\n", e3.name, e3.salary);

  /** Typedef usage:
  typedef int Integer;
  Integer a = 3;
  printf("Integer a equals %d\n", a);
  **/

  return 0;
}