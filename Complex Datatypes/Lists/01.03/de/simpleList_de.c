#include<stdio.h>
#include<stdlib.h>

#include "list.h"

int main(int argc, char **argv) {
  list *head = init(3);
  add(head, 25);
  add(head, 42);

  printf("1. Wert der Liste: %d\n", head->value);
  printf("2. Wert der Liste: %d\n", head->next->value);
  printf("3. Wert der Liste: %d\n", head->next->next->value);

  return 0;
}