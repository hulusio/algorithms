#include <stdio.h>
#include <stdlib.h>
#include "stack_ll.h"




int pop(node *root)
{
  if (root == NULL)
  {
    printf("Stack underflow\n");
    return -1;
    /* code */
  }
  node * iter = root;
  if (iter->next == NULL)
  {
    node * temp = iter;
    int return_value = temp->data;
    iter = NULL;
    free(temp);
    //printf("rv %d\n",return_value);
    return return_value;
  } 

  while (iter->next->next != NULL)
  {
    iter = iter->next;
  }
  node * temp = iter->next;
  int return_value = temp->data;
  iter->next = NULL;
  free(temp);
  //printf("rv %d\n",return_value);
  return return_value;

}

node * push(int val, node *root)
{
  if(root == NULL) // stack bos
  {
      root = (node*)malloc(sizeof(node)); 
      root->next = NULL;
      root->data = val;        
      return root;
  }
  node * iter = root;
  while ( iter->next != NULL)
  {
    iter = iter->next;
  }  
  node * yeni = (node*)malloc(sizeof(node));
  yeni->data = val;
  yeni->next = NULL;
  iter->next = yeni;
  return root;
}

void bastir(node *root) 
{

    node *iter = root;
    while(iter!= NULL)
    {
        printf("%4d  ", iter->data);
        iter = iter->next;
    }
    printf("\n");
}