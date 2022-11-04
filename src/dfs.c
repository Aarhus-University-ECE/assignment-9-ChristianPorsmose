/*
 * Search an expression using DFS.
 */

#include <stdio.h>		/* scanf, printf */
#include <stdlib.h>		/* abort */
#include <stdbool.h>		/* bool, true, false */
#include "dfs.h"

//init stack
stack* head = NULL;

void DFT (node * root)
{
  if (head == NULL) { //make head point root, by creating pointer to root. 
    stack* rootptr = malloc(sizeof(stack));
    rootptr->node = root; //make stack point to root.
    rootptr->next = head; //make rootptr point to 0.
    head = rootptr; //make head point to rootptr
  }
  while (head != NULL) { //while stack is not empty
    node* p = pop(); 
    print_node(p);
    //if both cases below fail, node is a leaf. 
    if (p->rchild != NULL) {
      push(p->rchild);
    }
    if (p->lchild != NULL) { 
      push(p->lchild);
    }

  }
  }
  
	// Hint: You can use print_node, print_tree and/or print_stack.

node *make_node (int num, node * left, node * right)
{
  node *p = malloc(sizeof(node));
  p->lchild = left;
  p->rchild = right;
  p->num = num;
  p->visited = false;
	return p;
}

void free_node (node * p)
{
	
}


void print_node (node * p)
{

  if (p == NULL)
    printf ("NULL\n");
  else
    printf ("%d ", p->num);
}


void print_tree (node * p, int depth)
{
  for (int i = 0; i < depth; i = i + 1)
    printf (" ");
  printf ("| ");

  if (p == NULL)
    printf ("NULL\n");
  else
    printf ("[%d]\n", p->num);


  if (p->lchild)
    {
      print_tree (p->lchild, depth + 1);
    }

  if (p->rchild)
    print_tree (p->rchild, depth + 1);
}

void push(node * node)
{
  stack* temp = malloc(sizeof(stack)); //pointer to stack
  temp->node = node; //temp point to node
  //insert temp in front of head.
  temp->next = head; 
  head = temp;
}

bool isEmpty (stack * topp)
{

  return false;
}

void top(stack * topp)
{
 
}

// Utility function to pop topp  
// element from the stack 

node *pop()
{
    stack* temp = head; //make temp point to first node
    head = temp->next; //make head point to next node.
    node* tempnode = temp->node;  //save node thats being pointed to
    free(temp); 
    return tempnode;
}

void print_stack (stack * topp)
{
  struct stack *temp = topp;

  while (temp != NULL)
    {

      print_node (temp->node);
      printf ("\n");

      temp = temp->next;
    }

  printf ("====\n");

  return;
}
