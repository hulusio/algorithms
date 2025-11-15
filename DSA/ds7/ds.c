
#include "lib.h"
int main() 
{
  	printf("Hello World ds7 -- create header file--!! \n");
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
