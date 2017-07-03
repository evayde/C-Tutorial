typedef struct Node {
  int value;
  struct Node *next;
} node;

typedef struct {
  node *head;
} list;

extern list* init(int);
extern void add(list*, int);
extern void printAll(list*);
extern void del(list*,int);