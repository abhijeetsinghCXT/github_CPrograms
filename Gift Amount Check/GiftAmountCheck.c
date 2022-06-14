#include<stdio.h>

int main()
{ 
int a, b;

  printf("If you've passed in Maths then press 1 otherwise 0\n"); 
  scanf("%d", &a); 
  printf("If you've passed in Science then press 1 otherwise 0\n");
  scanf("%d", &b); 
  if (a==1  && b==1)
  {
    printf("You got 45 Rupees!");
  }
  else if (a==1 && b==0)
  {
    printf("You got 15 Rupees");
  }
    else if (a==0 && b==1)
    {
        printf("You got 15 Rupees!");
    }
    else printf("Sorry, You got nothing. Work hard next time!");
  
  
  
    return 0;

  }
    
