#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
int age;
printf("Enter your age :");
scanf("%d",&age);
if (age>=18)
    printf("You are eligible for voting.");
else
    printf("You are not eligible for voting.");


return 0;
getch();
}
