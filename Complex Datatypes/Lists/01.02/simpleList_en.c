#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv) {
  typedef struct List {
    int value;
    struct List *next;
  } list;

  list *head = malloc(sizeof( *head ));
  head->value = 5;
  head->next = NULL;

  printf("head-value of our list: %d\n", head->value);

  list *node = malloc(sizeof( *node ));
  node->value = 1;
  node->next = NULL;

  head->next = node;

  printf("head-value of our list: %d\n", head->value);
  printf("second-value of our list: %d\n", head->next->value);

  return 0;
}