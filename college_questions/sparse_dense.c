#include <stdio.h>
int main ()
{
    int m,n,i,j;
    printf ("Enter the numbers if row :");
    scanf ("%d",&m);
    printf ("Enter the numbers if column :");
    scanf ("%d",&n);
    int ar[m][n],zero=0,non_zero=0;

    printf("enter the elements in array A :\n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {   
            printf("array[%d][%d]",i,j);
            scanf ("%d",&ar[i][j]);
        }
    }

    printf("matrix A :\n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d\t",ar[i][j]);
        }
        printf("\n");
    }

    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {   
            if (ar[i][j]==0)
                zero +=1;

            else 
                non_zero+=1;
        }
    }
    if (zero>non_zero)
    {
        printf("Array is Sparse.");
    }

    else
    {
        printf("Array is Dense.");

    }

return 0;
}
