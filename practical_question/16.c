#include <stdio.h>
int main ()
{
    int a[10][10],b[10][10],c[10][10];
    int p,q,i,j,sum=0;
    printf ("rows and columns :\n");
    scanf("%d\n%d",&p,&q);
    printf("Enter the elements of first array :\n");
    for (i=0;i<p;i++){
        for (j=0;j<q;j++){
            printf("a[%d][%d]",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of second array :\n");
    for (i=0;i<p;i++){
        for (j=0;j<q;j++){
            printf("b[%d][%d]",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    for (i=0;i<p;i++){
        for (j=0;j<q;j++){
            sum = sum + a[i][j] + b[i][j];
            c[i][j]=sum;
            sum =0;
        }
    }
    printf("Sum of the entered arrays is :\n ");
    for (i=0;i<p;i++){
        for (j=0;j<q;j++){
            printf("\t%d\t",c[i][j]);
        }
        printf("\n");
    }


    return 0;
}
