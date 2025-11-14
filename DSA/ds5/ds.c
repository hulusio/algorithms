
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
    printf("%4d  ", iter->x);
    iter = iter->next;
    while(iter!= r)
    {
        printf("%4d  ", iter->x);
        iter = iter->next;
    }
    printf("\n");
}

void ekle(node *r, int val)
{
    node *iter = r;
     node *temp ;
    while(iter->next != r)
    {
        iter = iter->next;
    }
    temp = (node*)malloc(sizeof(node));
    iter->next = temp ;   
    temp->x = val;      
    temp->next = r; //iter->next;
}

node * ekle_sirali(node * r, int val)
{
    if(r == NULL) // liste bos
    {
        r = (node*)malloc(sizeof(node)); 
        r->next = r;
        r->x = val;        
        return r;
    }
    if (r->x > val) // basa ekle
    {
        node *yeni = (node*)malloc(sizeof(node));
    	yeni->x = val;
    	yeni-> next = r;

        node * iter;
        iter = r;
        while(iter->next != r) // tail i bul
        {
            iter = iter->next;
        }
        iter->next = yeni; // tail in next ini yeni yap
    	return yeni;    
	}

    node * iter;
    iter = r;
    while(iter->next != r && iter->next->x < val) // sirali ekle
    {
        iter = iter->next;
    }
    node *yeni = (node*)malloc(sizeof(node));
    yeni->x = val;
    yeni-> next = iter->next;
    iter->next = yeni;
    return r;
}

node* sil(node * r, int val)
{
    node * iter; 
    iter = r;
    if(val == r->x )
    {
        while(iter->next != r) // tail i bul
        {
            iter = iter->next;
        }
        iter->next = r->next; // tail in next ini yeni yap
        free(r);
        return iter->next; // yeni root   
    
    }
    else
    {  
        node * temp;  
        while(iter->next != r && val != iter->next->x )
        {
            iter = iter->next;
        }
        if(iter->next == r) 
        {
            printf("eleman bulunamadi\n");
            return r;
        }
        temp = iter->next;
        iter->next = iter->next->next;    
        free(temp);
      return r;
    }

    
}
int main() 
{
  	printf("Hello World ds5! \n");
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
