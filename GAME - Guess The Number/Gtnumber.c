 /* 

This Game is developed by Abhijeet Singh in C Language under Basic C Programs 

*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int num, guess, attempts = 0;
    srand((time(0)));

    printf("Welcome to Guess the Number Game\n");

    num = rand() % 100 + 1;
    do
    {
        if (attempts>0)
        {
            goto label;
        }
        
        printf("Enter your Guess between 1 to 100\n");
     label: 
        scanf("%d", &guess);
        if (guess < num)
        {
            printf("Enter Higher Number\n");
        }
        else if (guess > num)
        {
            printf("Enter Lower Number\n");
        }
        else if (guess==num)
        {
           printf("Your guess %d is correct\n", num);
        }
        
            

        
        attempts++;

    } while (guess != num);
    printf("You take %d attempts for answer!\n", attempts);

    return 0;
}
