#include <stdio.h>
int main ()
{
    int m,n,i,j;
    printf ("Enter the numbers if row :");
    scanf ("%d",&m);
    printf ("Enter the numbers if column :");
    scanf ("%d",&n);
    int ar[m][n],at[m][n];
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
            at[i][j]=ar[j][i];

        }
    }

    printf("Transpose of a above matrix is :\n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {   
            printf("%d\t",at[i][j]);
        }
        printf("\n");
    }


    return 0;
 }
