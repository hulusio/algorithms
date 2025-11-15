
#ifndef LIB_H // include guard
#define LIB_H // include guard, cyclic includes önlemek için

#include <stdio.h>
#include <stdlib.h>

typedef struct n{
	int x;
    struct n *next;
    struct n *prev;    
}n;
typedef n node;

void bastir( node *r);

node * ekle_sirali(node * r, int val);

node* sil(node * r, int val);
#endif