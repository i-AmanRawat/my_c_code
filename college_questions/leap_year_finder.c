#include<stdio.h>

int main()
{
int year;
printf("Year :");
scanf("%d",&year);
if (year%4==0)
{    if (year%100==0)
    {   if (year%400==0)
            printf("leap year");
        
        else
            printf("not a leap year");
    }
    else
        printf("leap year.");
}   
else
{
    printf("Not a leap year.");
}

return 0; 
}
