#include<stdio.h>

void scanR(int n)
{
for (int i = 0; i<n; i++)
{ for (int j = 0; j < n-i; j++)
{
    printf("*");
}
    printf("\n");

}


}


int main()
{
    int n;
    printf("How many rowns do you want?\n");
    scanf("%d", &n);
    scanR(n);
    return 0;
}
