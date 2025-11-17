#ifndef STACK_LL_H
#define STACK_LL_H
#include <stdio.h>


typedef struct n
{    
 int data;
 struct n *next;   
}n;

typedef n node ;
//node* init();
int pop(node *root);
node* push(int val, node *root);
void bastir(node *root);

#endif  // STACK_LL_H