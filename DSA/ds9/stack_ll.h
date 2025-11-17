#ifndef STACK_LL_H
#define STACK_LL_H
#include <stdio.h>
#define LL_TYPE  0 //1: push and pop onto TAIL
                   //0: push and pop onto ROOT,HEAD,

typedef struct n
{    
 int data;
 struct n *next;   
}n;

typedef n node ;

#if LL_TYPE 
int pop(node *root);
#else
int pop(node **root);
#endif

node* push(int val, node *root);
void bastir(node *root);

#endif  // STACK_LL_H