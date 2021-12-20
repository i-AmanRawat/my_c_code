#include<stdio.h>
int main()
{
    int a[2][2],b[2][2] ;                                                //defining two matrix a and b 
    int c[2][2];                                                        //defining empty matrix in which we will store the multiplication of a and b
    int i,j,k,sum;
    printf("enter the elements of first 2*2 matrix : \n");
    for( i=0;i<2;i++)
        for( j=0;j<2;j++)
            scanf("%d",&a[i][j]);

    printf("enter the elements of second 2*2 matrix :\n");
    for( i=0;i<2;i++)
        for( j=0;j<2;j++)
            scanf("%d",&b[i][j]);

    for( i=0;i<2;i++)
    {
        for ( j=0;j<2;j++)
        {
            sum =0;
            for(k=0;k<2;k++)
            {
                
                sum = sum + a[i][k] * b[k][j] ;
                
            }
        c[i][j] = sum;
        }
    
    }    

    printf("multiplication of above 2 matrix is :\n");
    for( i=0;i<2;i++)
    {
        for( j=0;j<2;j++)
        {
           printf("%d    ",c[i][j]);   
        }
    printf("\n");
    }

    return 0;
}

