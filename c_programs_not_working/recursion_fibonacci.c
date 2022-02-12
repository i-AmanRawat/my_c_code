#include<stdio.h>
int fibonacci(int);
int main ()
{   
    int position ;
    printf("Enter the position of fibonacci series you want to print :");
    scanf("%d",&position);;
    printf("value at %d is %d",position,fibonacci(position));
    return 0;
}
int fibonacci(int pos)
{
    int i;
    int a=0;
    int b=1;
    for (i=0;i<pos;i++)
    {
        b=a+b;
        a=b-a;
    }
    return a;
}
