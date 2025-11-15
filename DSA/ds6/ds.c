
#include <stdio.h>
#include <stdlib.h>

typedef struct n{
	int x;
    struct n *next;
    struct n *prev;    
}n;
typedef n node;

void bastir( node *r)
{
    node *iter = r;
    while(iter!= NULL)
    {
        printf("%4d  ", iter->x);
        iter = iter->next;
    }
    printf("\n");
}

node * ekle_sirali(node * r, int val)
{
    if(r == NULL) // liste bos
    {
        r = (node*)malloc(sizeof(node)); 
        r->next = NULL;
        r->prev = NULL;
        r->x = val;        
        return r;
    }
    if (r->x > val) // basa ekle
    {
        node *yeni = (node*)malloc(sizeof(node));
    	yeni->x = val;
    	yeni-> next = r;
        yeni-> prev = NULL;
        r->prev = yeni;
        r->next = NULL;

    	return yeni;    
	}

    node * iter;
    iter = r;
    while(iter->next != NULL && iter->next->x < val) // sirali ekle
    {
        iter = iter->next;
    }
    node *yeni = (node*)malloc(sizeof(node));    
    yeni-> next = iter->next;
    yeni->x = val;
    iter->next = yeni;
    yeni->prev = iter;
    if (yeni->next != NULL)
        yeni->next->prev = yeni;
    return r;
}

node* sil(node * r, int val)
{
    node * iter; 
    iter = r;
    if(val == r->x )
    {   iter = r;
        r = r->next;
        free(iter);
        return r; // yeni root   
    
    }
    else
    {  
        node * temp;  
        while(iter->next != NULL && val != iter->next->x )
        {
            iter = iter->next;
        }
        if(iter->next == NULL) 
        {
            printf("eleman bulunamadi\n");
            return r;
        }
        temp = iter->next;
        iter->next = iter->next->next; 
        if (iter->next != NULL)
            iter->next->prev = iter;   
        free(temp);
      return r;
    }

    
}
int main() 
{
  	printf("Hello World ds6 -- doubly link list--!! \n");
	node * root;
    root = NULL;
    root = ekle_sirali(root, 400); 
    root = ekle_sirali(root, 50);
    root = ekle_sirali(root, 40);
    root = ekle_sirali(root, 550);   
    root = ekle_sirali(root, 450); 
    root = ekle_sirali(root, 560); 
    root = ekle_sirali(root, 12);

    bastir(root);  
  
    printf("-- 12 sildim \n") ;
    root = sil(root,12);
    bastir(root);
    printf("-- 40 sildim \n") ;   
    root = sil(root,40);
    bastir(root);

     printf("-- -- \n") ;   
    root = sil(root,999);
    bastir(root);

    printf("-- 50 sildim \n") ;
    root = sil(root,50);
    bastir(root);
           
    printf("-- 550 sildim \n") ;
    root = sil(root,550);
    bastir(root);
 

  return 0; 

}
