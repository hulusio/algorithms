
//1- find smallest item of array
//2- Replace smallest item first one on array
//3- Expand sorted field
//4- Cotinue all untill all items are sorted.

#include <stdio.h>
#include <stdlib.h>

void selection_sort(int lst[], int n)
{
  int min = 0;
  int temp ;
  for (size_t i = 0; i < n; i++)
  {
    /* code */
    min = i;
    for (size_t j = i + 1; j < n; j++)
    {
        // if selected one bigger than other part
        if (lst[min] > lst[j])
        {
          min = j;
        }
     } 
     //replace
     temp = lst[i];
     lst[i] = lst[min];
     lst[min] = temp;
     
  }  

}


int main() 
{
  printf("hello world  -- selection-sort! \n");

  int lst[7] = {5, -6, 8, 1, 4, 2, 0};
  int n = 7;
  printf("before sort\n");
  for (size_t i = 0; i < n; i++)
  {
    printf("%4d ",lst[i]);
  }
  printf("\nafter sort\n");
  selection_sort(lst, n);
  for (size_t i = 0; i < n; i++)
  {
    printf("%4d ",lst[i]);
  }
  

  return 0; 

}
