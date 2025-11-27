
//1-Initial State: The algorithm starts from the second element of the array (the first element is considered 
// already sorted).
//2-Nested Loop: The selected element (current element) is compared with the sorted part and placed in the 
// correct position.
//3-Placement: If the current element is smaller than an element in the sorted part, the sorted element is 
// shifted right, and the current element is inserted in the correct position.
//4- Repeat: The algorithm continues until the end of the array, placing each element in the correct position.

#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int lst[], int n)
{
  int key ;
  int j;
  for (size_t i = 1; i < n; i++)
  {
    key = lst[i];
    j = i -1;

    while ( j >= 0 && key < lst[j])
    {
      lst[j + 1 ] = lst[j];
      j -=1;           
    }
    lst[j+1] = key;

  } 
}


int main() 
{
  printf("hello world  -- insertion_sort! \n");

  int lst[7] = {5, -6, 8, 1, 4, 2, 0};
  int n = 7;
  printf("before sort\n");
  for (size_t i = 0; i < n; i++)
  {
    printf("%4d ",lst[i]);
  }
  printf("\nafter sort\n");
  insertion_sort(lst, n);
  for (size_t i = 0; i < n; i++)
  {
    printf("%4d ",lst[i]);
  }
  
  return 0; 
}
