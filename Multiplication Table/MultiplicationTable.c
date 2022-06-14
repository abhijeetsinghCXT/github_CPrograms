#include<stdio.h>
// Print Multiplication table of any input Number
int main()
{
int a;
int b;
printf("Enter the Number:\n");
scanf("%d", &a);

for (b=2; b<11; b++)
{
    printf("%d\n", a*b);
}
    return 0;
}