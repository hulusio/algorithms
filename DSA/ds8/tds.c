
#include <stdio.h>
#include <stdlib.h>  
#include "stack_arr.h"

int main() 
{
  printf("Hello World ds8 -- stack (array) --!! \n");
  stack *s1;
  stack *s2;
  s1 = init();
  s2 = init();
  for(int i=1; i<=10; i++) 
  {
    push(i, s1);
    //push(i*10, s2);
  }
  bastir(s1);
  for (size_t i = 0; i < 10; i++)
  {
    push(pop(s1), s2);
    //printf("Popped: %d\n", pop(s1));    
  }
  bastir(s2);


  return 0; 
}
