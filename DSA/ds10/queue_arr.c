
#include "queue_arr.h"
#include <stdlib.h>
queue* init()
{
    queue* q = (queue*)malloc(sizeof(queue));
    q->front = 0;
    q->peek  = 0;
    q->size  = 2 ;
    q->dizi = NULL;

    return q;
}
int dequeue(queue *q)
{
    if(q->peek == q->front)
    {
      printf("Queue empty\n");
      return -1;
    }
    int diff = q->peek - q->front;
    if( diff <= q->size/4)
    {
      q->size /=2;
      int * dizi2 = (int*) malloc(sizeof(int) * q->size);
      for (size_t i = 0; i < diff ; i++)
      {
        dizi2[i] = q->dizi[q->front + i];
      }
      q->peek -=q->front;
      q->front =  0;
      free(q->dizi);
      q->dizi = dizi2;
    }
    return q->dizi[q->front++];
}

void enqueue(queue *q,int x)
{
  if(q->dizi == NULL)
  {
      q->dizi = (int*)malloc(sizeof(int)*q->size);
  }
  if (q->peek >= q->size)
  {
    q->size *=2;
    int * dizi2 = (int*) malloc(sizeof(int) * q->size);
    for (size_t i = 0; i < q->size /2 ; i++)
    {
       dizi2[i] = q->dizi[i];
    }
    free(q->dizi);
    q->dizi = dizi2;
  }  
  q->dizi[q->peek++] = x;
}

void display(queue *q)
{
  printf("size:%d peek:%d  front:%d\n",q->size, q->peek, q->front);
  for (size_t i = q->front; i < q->peek ; i++)
  {
     printf("%4d",q->dizi[i]);
  }
  printf("\n")  ;
}
