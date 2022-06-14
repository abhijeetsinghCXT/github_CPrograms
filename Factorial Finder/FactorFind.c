#include<stdio.h>

int Factorial(int num)
{
if (num==0 || num==1)
{
    return 1;
}
else 
    return num*Factorial(num-1); 
    



}


int main()
{ int num;
    printf("Enter the desired Number : \n");
    scanf("%d", &num);
    printf("%d", Factorial(num));
    return 0;
}
