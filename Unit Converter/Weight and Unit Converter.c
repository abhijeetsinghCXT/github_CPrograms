#include<stdio.h>

int main()
{
    for (size_t i = 0; i <100; i++)
    {
      
    
    int a,b,c,d;
    float e,f,g,h,i,j;
    printf("Press 1 for Tempurature Unit Converting\n Press 2 for Weight Unit Converting\n ");
    scanf("%d", &a);


if (a==1)
{
    printf("Press 1 for Converting Celsius to Kelvin\n Press 2 for converting Celsius to Farenhite\n Press 3 for converting Kelvin to Farenhite");
    scanf("%d", &b);

    if (b==1)
    {
        printf("Enter the Temperature in Celsius\n");
        scanf("%d", &c);
        d= 273+c;
        printf("Temperature in Kelvin is\n %d K", d);
        break;
    }
    if (b==2)
    {
        printf("Enter the Temperature in Celsius\n");
        scanf("%d", &c);
        d= c * 1.8 + 32;
        printf("Temperature in Farenhite is\n %d F", d);
        break;
    }
    if (b==3)           
    {
        printf("Enter the Temperature in Farenhite\n");
        scanf("%d", &c);
        d= c + 459.67 * 5/9;
        printf("Temperature in Kelvin is\n %d K", d);
        break;
    }
    
    
}

if (a==2)
{
   printf("Press 1 for Converting KG to Pounds\n Press 2 for converting KG to Gram\n Press 3 for converting KG to Quintal");
    scanf("%d", &b);

    if (b==1)
    {
        printf("Enter the Weight in KG\n");
        scanf("%d", &c);
        e= c*2.2046226218;
        printf("Weight in Pounds is\n %f Ibs", e);
        break;
    }
    if (b==2)
    {
        printf("Enter the Weight in KG\n");
        scanf("%d", &c);
        d= c*1000;
        printf("Weight in Gram is\n %d Grams", d);
        break;
    }
    if (b==3)           
    {
        printf("Enter the Weight in KG\n");
        scanf("%d", &c);
        e= c*0.020429009193054;
        printf("Weight in Quintal is\n %f Quintal", e);
        break;
    } 
}

else printf("Sorry, Please press a valid Number\n ");
    continue;
    }
    return 0;
}
