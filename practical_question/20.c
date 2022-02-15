#include<stdio.h>
int main ()

{
    int a ,*ptr ;
    printf("Enter the the value of a : \n");
    scanf("%d",&a);
    ptr = &a ;
    printf ("value of a is %d \n",a);
    printf("Address of a is %x \n",ptr);
    printf("printing value of a using pointer : %d\n",*ptr);
    return 0;
}
