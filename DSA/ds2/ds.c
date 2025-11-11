#include <stdio.h>
#include <stdlib.h>

typedef struct n{
	int x;
    struct n *next;    
}n;
typedef n node;

void bastir( node *r)
{
    node *iter = r;
    while(iter != NULL)
    {
        printf("%d \n", iter->x);
        iter = iter->next;
    }
}
void ekle(node *r, int val)
{
    node *iter = r;
    while(iter->next != NULL)
    {
        iter = iter->next;
    }
    iter->next = (node*)malloc(sizeof(node));
    iter = iter->next; 
    iter->x = val;      
    iter->next = NULL;
}
int main() {

  printf("Hello World ! \n");
  node *root = (node*)malloc(sizeof(node)); 
  root->x = 77;
  
  node * iter = root;
  for(int i =0; i<10; i++)
  {
    iter->next = (node*)malloc(sizeof(node));
    iter = iter->next; 
    iter->x = 10 * i;      
    iter->next = NULL;
  }
  bastir(root);
  ekle(root, 999);
  printf("After adding 999 \n");
  bastir(root);

  return 0; 

}
