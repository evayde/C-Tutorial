#include<stdio.h>
#include<stdlib.h>

#include "list.h"

list* init(int a) {
  list *head = malloc(sizeof( *head ));
  head->value = a;
  head->next = NULL;

  return head;
}

void add(list *r, int b) {
  while(r->next != NULL)
    r = r->next;

  list *node = malloc(sizeof( *node ));
  node->value = b;
  node->next = NULL;

  r->next = node;
}