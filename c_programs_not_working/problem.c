#include <stdio.h>
int main()
{
    int n,a,b,add;
    printf("Enter the size:");
    scanf("%d", &n);
    int arr[n], sum;
    printf("no.s");


    for (int i = 0; i < n; i++)
    {
        printf("Enter arr[%d]:", i);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum of arr[]: %d" ,sum);

    scanf("%d",&a);
    scanf("%d",&b);

    add = a+b;
    printf("sum is");
    printf("%d",add);


    
return 0;
}
