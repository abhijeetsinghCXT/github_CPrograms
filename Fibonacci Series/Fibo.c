#include <stdio.h>

int fibo_recursive(int num)
{

    if (num == 0 || num == 1)
    {
        return num;
    }

    else
        return fibo_recursive(num - 1) + fibo_recursive(num - 2);
}

int main()
{
    int num;
    printf("Enter the Index for Fibonacci Series\n");
    scanf("%d", &num);
    printf("%d", fibo_recursive(num));
    return 0;
}
