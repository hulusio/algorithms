
#include <stdio.h>
#include <stdlib.h>  

#include "queue_arr.h"

int main() 
{
  printf("Hello World ds10-- queue (array) --!! \n");
  queue *q = NULL;
  q =  init();

  for (size_t i = 0; i < 20; i++)
  {
    enqueue(q, i *10);
  }

  //display();
  for (size_t i = 0; i <10; i++)
  {
    printf("%4d",dequeue(q));
    //dequeue();
  }
  printf("\n");
  //display();  
  for (size_t i = 0; i < 20; i++)
  {
    enqueue(q, i *10);
  }
  //display();
  for (size_t i = 0; i < 30; i++)
  {
    printf("%4d",dequeue(q));
    //dequeue(q);
  }
  printf("\n");
  display(q);

 
  return 0; 
}
