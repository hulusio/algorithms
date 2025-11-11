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
        printf("%4d  ", iter->x);
        iter = iter->next;
    }
    printf("\n");
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

void ekle_sirali(node *r, int val)
{
    if(r == NULL) 
    {
        r = (node*)malloc(sizeof(node)); 
        r->next = NULL;
        r->x = val;        
        return;
    }

    while(r->next != NULL && r->next->x < val)
    {
        r = r->next;
    }
    node *yeni = (node*)malloc(sizeof(node));
    yeni->x = val;
    yeni-> next = r->next;

}
int main() 
{
  printf("Hello World ds3! \n");
  node *root = (node*)malloc(sizeof(node)); 
  root->x = 88;
  
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

  printf("----\n");

  node *araya = (node*)malloc(sizeof(node)); 
  araya->x = 777;
  iter = root;
  for (size_t i = 0; i < 3; i++)
  {
    iter = iter->next;
    /* code */
  }
   araya->next = iter->next;
   iter->next = araya;
   bastir(root);

    printf("---- sirali ekleme\n");
    node *root2 ;
    root2 = NULL;
    ekle_sirali(root2, 50);
    printf("root2.x: %d\n", root2->x);
    //ekle_sirali(root2, 30);
    //ekle_sirali(root2, 40);
    bastir(root2);
  return 0; 

}
