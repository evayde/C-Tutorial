#include<stdio.h>
#include<stdlib.h>

#include "list.h"

int main(int argc, char **argv) {
  list *l = init(3);
  add(l, 25);
  add(l, 25);
  add(l, 42);

  printAll(l);
  del(l, 42);
  printf("-------------------------\n");
  printAll(l);

  return 0;
}