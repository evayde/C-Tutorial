typedef struct List {
  int value;
  struct List *next;
} list;

extern list* init(int);
extern void add(list*, int);