
#include "queue_ll.h"
#include <stdlib.h>

int dequeue(node **root)
{
  if(*root == NULL)
  {
    printf("queue empty\n");
    return -1;
  }

  node * temp = (node*)*root;
  int return_value = temp->data;
  *root = temp->next;
  free(temp);

  return return_value;    
}

node* enqueue(node *root, int x)
{
    if(root == NULL)
    {
      root = (node*)malloc(sizeof(node));
      root->data = x;
      root->next = NULL;
      return root;
    }
    node *iter = root;
    while (iter->next != NULL)
    {       
      iter = iter->next;
    }
    node * new  = (node*)malloc(sizeof(node));
    new->data = x;
    new->next = NULL;
    iter->next = new;
    return root;
}

void display(node *root)
{
  node * iter = root;
  while (iter != NULL)
  {  
     printf("%4d ",iter->data);
     iter = iter->next;
  }
  printf("\n")  ;
}
