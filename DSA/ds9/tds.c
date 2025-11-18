
#include <stdio.h>
#include <stdlib.h>  
#include "stack_ll.h"

int main() 
{
  printf("Hello World ds9 -- stack (linked-list) --!! \n");

 #if LL_TYPE 
 node *root = NULL;
 node *root2 = NULL;

  for(int i=1; i<=10; i++) 
  {
    root = push(i, root);
    //push(i*10, s2);
  }
  bastir(root);
  for (size_t i = 0; i < 10; i++)
  {
    root2 = push(pop(root), root2);
    //printf("Popped: %d\n", pop(s1));    
  }
  bastir(root2);
  #else
 node *root = NULL;
 node *root2 = NULL;

  for(int i=1; i<=10; i++) 
  {
    root = push(i, root);
    //push(i*10, s2);
  }
  bastir(root);
  for (size_t i = 0; i < 11; i++)
  {
    root2 = push(pop(&root), root2);
    //printf("Popped: %d\n", pop(&root));    
  }
  bastir(root2);
  #endif
  return 0; 
}
