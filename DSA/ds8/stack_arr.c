#include <stdio.h>
#include <stdlib.h>
#include "stack_arr.h"

/* define globals here (one definition only) */
//int *dizi = NULL;
//int boyut = 2;
//int tepe = 0;

stack* init()
{
    stack* s = (stack*)malloc(sizeof(stack));
    s->boyut = 2;
    s->tepe = 0; 
    s->dizi = NULL;
    return s;
}
int pop(stack *s) 
  {
    if (s->tepe <= 0 || s->dizi == NULL) 
    {
      printf("Stack underflow\n");
      return -1; 
    }
    if(s->tepe <= s->boyut / 4 && s->boyut > 2) 
    {
      int * dizi2 =  (int*)malloc(sizeof(int) *  s->boyut / 2);
      for (int i = 0; i < s->tepe; i++) 
      {
        dizi2[i] = s->dizi[i];
      }
      free(s->dizi);
      s->dizi = dizi2;     
      s->boyut /= 2;
    }
   return s->dizi[--s->tepe]; 
  }

int push(int val, stack * s)
  {
    if(s->dizi == NULL)
    {
        s->dizi = (int*)malloc(sizeof(int) * s->boyut);
    }

    if (s->tepe >= s->boyut) 
    {
      int * dizi2 =  (int*)malloc(sizeof(int) * s->boyut * 2);
      for (int i = 0; i < s->boyut; i++) 
      {
        dizi2[i] = s->dizi[i];
      }
      free(s->dizi);
      s->dizi = dizi2;     
      s->boyut *= 2;
    }
    return s->dizi[s->tepe++] = val;
  }
  
  void bastir(stack *s) 
  {
    printf("boyut: %d\n\r", s->boyut);
    for (int i = 0; i < s->tepe; i++) 
    {
      printf("%d ", s->dizi[i]);
    }
    printf("\n");
  }