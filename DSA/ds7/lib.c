#include "lib.h"

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

    	return yeni;    
	}

    node * iter;
    iter = r;
    while(iter->next != NULL && iter->next->x < val) // sirali ekle
    {
        iter = iter->next;
    }
    //printf("-- inserting %d after %d \n", val, iter->x);
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