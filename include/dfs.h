#include <stdbool.h>		/* bool, true, false */

typedef struct node
{
  int num;
  bool visited;
  struct node *lchild;
  struct node *rchild;
} node;


node *make_node (int num, node * left, node * right);

void free_node (node * p);

void print_node (node * p);

void print_tree (node * p, int depth);

void DFT (node * root);

typedef struct stack
{
  struct node *node;
  struct stack *next;
} stack;


void push(node * node);

bool isEmpty (stack * topp);

void top(stack * topp);

node* pop(); 

void print_stack (stack * topp);

extern stack* head; //global variable

