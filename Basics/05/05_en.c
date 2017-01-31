/** Agenda
  *  - get to know 'char' datatype
  *  - get to know Arrays
  *  - special Array: char-Arrays
**/
#include<stdio.h>

void main() {
    /** first way to declare and initialze an Array
    int a[4];
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    a[3] = 4;
    **/

    /** second way to declare and initialze an Array
    int a[] = {10,20,30,40};
    printf("Index 0 of the int-Array is %d \n", a[0]);
    **/

    char c1[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char c2[] = "Hello World!"; // = {'H', 'e', 'l', 'l', 'o', ... , '\0'};
    //printf("Index 2 of the char-Array is %c \n", c[2]);
    printf("String: %s \n", c2);
}