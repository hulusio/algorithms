#include <stdio.h>
#include <stdlib.h>

typedef struct n{
	int x;
    struct n *next;    
}n;
typedef n node;

int main() {

  printf("Hello World ! \n");
  node *root = (node*)malloc(sizeof(node));
  root->x = 10;
  root->next = (node*)malloc(sizeof(node));
  root->next->x = 20; 

  root->next->next = (node*)malloc(sizeof(node));
  root->next->next->x = 30;

  root->next->next->next = NULL;

  node *iter = root;
  while(iter != NULL)
  {
    printf("%d \n", iter->x); 
    iter = iter->next;
  }

  return 0; 

}
