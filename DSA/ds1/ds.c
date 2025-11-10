#include <stdio.h>
#include <stdlib.h>

typedef struct n{
	int x;
    struct n *next;    
}n;
typedef n node;

int main() {


  printf("Hello World!");
  node *root = (node*)malloc(sizeof(node));
  root->x = 10;
  root->next = (node*)malloc(sizeof(node));
  root->next->x = 20; 
  for(int i =1 ; i<=3 ;i++)
    {
		
    }
  return 0;
}
