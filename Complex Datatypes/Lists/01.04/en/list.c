#include<stdio.h>
#include<stdlib.h>

#include "list.h"

list* init(int a) {
  node *head = malloc(sizeof( *head ));
  head->value = a;
  head->next = NULL;

  list *l = malloc(sizeof(*l));
  l->head = head;

  return l;
}

void add(list *l, int b) {
  node *r = l->head;

  while(r->next != NULL)
    r = r->next;

  node *n = malloc(sizeof( *n ));
  n->value = b;
  n->next = NULL;

  r->next = n;
}

void printAll(list *l) {
  node *r = l->head;

  while(r != NULL) {
    printf("Element value is: %d\n", r->value);
    r = r->next;
  }

  free(r);
}

void del(list *l, int b) {
  node *r = l->head;
  node *before = NULL;

  while(r != NULL) {
    if(r->value == b) {
      if(before == NULL) {
        l->head = r->next;
        return;
      }
      else {
        before->next = r->next;
        return;
      }
    }
    
    before = r;
    r = r->next;
  }
}