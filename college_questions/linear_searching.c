#include <stdio.h>
int main()
{
    int ar[10], i, j, n, sr;
    printf("Enter the size of the array :\n");
    scanf("%d", &n);
    printf("Enter the elements in the array.\n");
    for (i = 0; i < n; i++)
    {
        printf("Array[%d]:", i + 1);
        scanf("%d", &ar[i]);
    }
    printf("Enter the element you are seeking :\n");
    scanf("%d", &sr);
    int f=0;
    for (i = 0; i < n; i++)
    {
        if (ar[i] == sr)
        {
            printf("%d is present at %d position. \n", sr, i + 1);
            f=1;
            break;
        }
    }
    if(f==0){
        printf("%d not found.\n",sr);
    }
    return 0;
}
