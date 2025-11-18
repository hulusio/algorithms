
#include <stdio.h>
#include <stdlib.h>  

#include "queue_ll.h"

int main() 
{
  printf("Hello World ds11-- queue (linked-list) --!! \n");
  node *root = NULL;
  for (size_t i = 0; i < 20; i++)
  {
    root = enqueue(root, i *10);
  }

  //display();
  for (size_t i = 0; i <10; i++)
  {
    printf("%4d",dequeue(&root));
    //dequeue();
  }
  printf("\n");
  //display();  
  for (size_t i = 0; i < 20; i++)
  {
    root = enqueue(root, i *10);
  }
  //display();
  for (size_t i = 0; i < 40; i++)
  {
    printf("%4d",dequeue(&root));
    //dequeue(q);
  }
  printf("\n");
  //display(root);
 
  return 0; 
}
