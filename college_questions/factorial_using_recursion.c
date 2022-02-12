#include <stdio.h>
int factorial(int);
int main()
{
    int num;
    printf("Program to calculate the factorial of a number \n");
    printf("Enter your desired number :");
    scanf("%d", &num);
    printf("Factorial of %d is %d :", num,factorial(num));
    return 0;
}

int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }

    else
    {
        return (n * factorial(n - 1));
    }
}
