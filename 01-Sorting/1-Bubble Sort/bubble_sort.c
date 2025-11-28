//1- İterate over list two time (nested-loop)
//2- Each iteration compare two elements of array ( index , index +1)
//3- replace


#include <stdio.h>

void bubble_sort(int lst[], int n)
{
  int temp ;
  for (size_t i = 0; i < n; i++)
  {
    for (size_t j = 0; j < n -1 ; j++)
    {
        // if selected one bigger than other part
        if (lst[j+1] < lst[j])
        {
               //replace
           temp = lst[j +1];
           lst[j+1] = lst[j];
           lst[j] = temp;
          
        }
     }     
  } 

}


int main() 
{
  printf("hello world  -- bubble_sort! \n");

  int lst[8] = {5, -6, 8, 1, 4, 2, 0, -8};
  int n = 8;
  printf("before sort\n");
  for (size_t i = 0; i < n; i++)
  {
    printf("%4d ",lst[i]);
  }
  printf("\nafter sort\n");
  bubble_sort(lst, n);
  for (size_t i = 0; i < n; i++)
  {
    printf("%4d ",lst[i]);
  }
  

  return 0; 

}
