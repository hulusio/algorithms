#include <stdio.h>
#include <stdlib.h>

void heapfy(int lst[], int ln ,int i)
{
  int parent = i;
  int left   = 2 * i + 1;
  int right  = 2 * i + 2;
  int tmp = 0;
  if(left < ln && lst[left] > lst[parent])
  {
    parent = left;
  }

  if(right < ln && lst[right] > lst[parent])
  {
    parent = right;
  }
  if (parent != i)
  {
    tmp = lst[i];
    lst[i] = lst[parent];
    lst[parent] = tmp;
    heapfy(lst, ln, parent);
  }  
}

void display(int lst[], int ln)
{
  for(int i = 0; i < ln ; i++)
  {
    printf("%4d ",lst[i]);
  }
  printf("\n");
}

//1- heapfy array first
//2- sort, option..
//3-en sondaki sayı ile roottakini degistir
//  Heapfy et,
void sort(int lst[],int ln)
{
  int tmp = 0;
  for (int i = (ln / 2) - 1 ; i >= 0; i--) 
  {
    //printf("i :%d\n",i);
    heapfy(lst, ln, i);    
  }


  for (int i = ln -1; i >0 ; i--)
  { 
    tmp = lst[0];
    lst[0] = lst[i];
    lst[i] = tmp;
    heapfy(lst, i ,0);    
  }
}

int main()
{

  printf("Hello World - heap sort data str! \n");
  int lst[8] = {5, 8, 1, 4, 2, 0, 9};
  printf("before--\n");
  display(lst,7);

  sort(lst, 7);

  printf("after sort--\n");
  display(lst,7);

  return 0; 

}
