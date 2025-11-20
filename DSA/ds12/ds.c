#include <stdio.h>
#include <stdlib.h>

typedef struct n{
	  int data;
    struct n *left; 
    struct n *right;    
   
}n;
typedef n node;

node* insert(node* root, int x)
{
  if (root == NULL)
  {
    node* rtn = (node*)malloc(sizeof(node));
    rtn->data = x;
    rtn->left = NULL;
    rtn->right = NULL;
    return rtn;    
  }

  if (root->data > x)
  {
    root->left = insert(root->left, x);
    return root;
  }

  if (root->data < x)
  {
    root->right = insert(root->right, x);
    return root;
  }
  
}
void traverse(node* root)
{
  if(root == NULL)  //L N R
      return;
      traverse(root->left);         //L
      printf("%4d ",root->data); //N 
      traverse(root->right);        //R
}
int search(node* root, int s)
{
  if(root == NULL)
    return -1;
  if (root->data == s)
    return 1;

    if (search(root->right, s) == 1)
    { 
       return 1;
    }
    if (search(root->left, s) == 1)
    { 
       return 1;
    }
    return -1;
}
int find_min(node* root)
{
  while ( root->left != NULL)
  {
      root = root->left;
  }
  return root->data;
}
int find_max(node* root)
{
    while ( root->right != NULL)
  {
      root = root->right;
  }
  return root->data;
  
}
node * delete(node* root, int x)
{
  if(root == NULL)
    return NULL;
    if (root->data == x)
    { 
      if ( root->left == NULL && root->right == NULL) // Ağacın iki taarafı boşsa
      {   
         return NULL;
      }
      if (root->right != NULL) //Sağ tarafta silinecek eleman varsa
      {
        root->data = find_max(root->right);
        root->right = delete(root->right, find_max(root->right));
        return root;        
       }
      if (root->left != NULL) //Sol tarafta silinecek eleman varsa (Bu if opsiyonel)
      {
        root->data = find_max(root->left);
        root->left= delete(root->left, find_max(root->left));
        return root;        
       }                 
      
    }
    if (root->data < x )
    {
      root->right = delete(root->right, x);
      return root;
    }
    // if(root->data > x)
    root->left = delete(root->left, x);
    return root;
}
int main() 
{

  printf("Hello World ds12-Binary Search Tree ! \n");
  printf("INSERT\n");
  printf("TRAVERSE\n");
  printf("SEARCH\n");
  printf("MIN\n");
  printf("MAX\n");
  node* root = NULL;
  root = insert(root, 12);
  root = insert(root, 200);
  root = insert(root, 190);
  root = insert(root, 213);
  root = insert(root, 56);
  root = insert(root, 24);
  root = insert(root, 18);
  root = insert(root, 27);
  root = insert(root, 28);
  traverse(root);
  printf("\n");
  printf("search result :%d\n",search(root ,8));
  printf("search result :%d\n",search(root ,190));
  printf("min :%d max :%d\n",find_min(root), find_max(root));
  root = delete(root, 190);
  traverse(root);
  printf("\n");


  return 0; 

}
