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

node * ekle_sirali(node * r, int val)
{
    if(r == NULL) 
    {
        r = (node*)malloc(sizeof(node)); 
        r->next = NULL;
        r->x = val;        
        return r;
    }
    if (r->x > val)
    {
        node *yeni = (node*)malloc(sizeof(node));
    	yeni->x = val;
    	yeni-> next = r;
    	return yeni;    
	}
    node * iter;
    iter = r;
    while(iter->next != NULL && iter->next->x < val)
    {
        iter = iter->next;
    }
    node *yeni = (node*)malloc(sizeof(node));
    yeni->x = val;
    yeni-> next = iter->next;
    iter->next = yeni;
    return r;



}
int main() 
{
  	printf("Hello World ds3! \n");
	node * root;
    root = NULL;
    root = ekle_sirali(root, 400); 
    root = ekle_sirali(root, 50);
    root = ekle_sirali(root, 40);
    root = ekle_sirali(root, 550);   
    root = ekle_sirali(root, 450); 

    bastir(root);
  return 0; 

}
