#include <stdio.h>

void star(int n)
{

    int i;
    for (i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}

int main()
{

    int n;
    printf("How many rows do you want?\n");
    scanf("%d", &n);
    star(n);
    return 0;
}
