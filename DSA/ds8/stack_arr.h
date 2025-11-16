#ifndef STACK_ARR_H
#define STACK_ARR_H
#include <stdio.h>

//extern int *dizi;
//extern int boyut;
//extern int tepe;
typedef struct s
{    
 int boyut;
 int tepe;
 int *dizi;   
}s;

typedef s stack ;
stack* init(); 
int pop(stack *s);
int push(int val, stack * s);
void bastir(stack *s);

#endif  // STACK_ARR_H