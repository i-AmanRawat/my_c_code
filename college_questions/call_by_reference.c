#include <stdio.h>
void swap(int *, int * );
int main ()
{
    int a =12;
    int b =100;
    printf("numbers before swap :\n");
    printf("%d and %d \n",a,b);
    swap(&a,&b);
    printf("numbers after swap :\n");
    printf("%d and %d \n",a,b);
    return 0;
}
void swap(int *m, int *n)
{   
    int temp;
    temp=*m;
    *m=*n;
    *n=temp;
}
