#ifndef QUEUE_ARR_H
#define QUEUE_ARR_H

#include <stdio.h>

typedef struct q
{    
    int size;
    int peek;
    int front;
    int *dizi;   
}q;

typedef q queue;
queue* init(); 
int dequeue(queue *q);
void enqueue(queue * q, int val);
void display(queue *q);

#endif  // QUEUE_ARR_H