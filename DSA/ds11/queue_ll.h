#ifndef QUEUE_LL_H
#define QUEUE_LL_H

#include <stdio.h>

//typedef struct q
//{    
//    int size;
//    int peek;
//    int front;
//    int *dizi;   
//}q;

typedef struct n
{    
 int data;
 struct n *next;   
}n;

typedef n node;

int  dequeue(node **root);
node* enqueue(node *root, int val);
void display(node *q);

#endif  // QUEUE_LL_H