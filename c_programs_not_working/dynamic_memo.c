#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int *marks;
    int n;
    printf ("Enter the no. of marks you want to enter :\n");
    scanf("%d",&n);
    marks = (int *) calloc(n,sizeof(int ));
    // printf("value of n is %d\n",n);

    for(int i =0 ;i<n;i++)                     
    {
        printf("Enter the marks for %d\n",i+1);
        scanf("%d",&marks[i]);
    }

    for(int i =0 ;i<n;i++)
    {
        printf("Marks entered for %d is %d\n",i+1,marks[i]);
        
    }

    free(marks);

    int new;
    printf("Enter the new size :\n");
    scanf("%d",&new);
    marks= (int *) realloc(marks,new*sizeof(int));

    for(int i =0 ;i<new;i++)                     
    {
        printf("Enter the marks for %d\n",i+1);
        scanf("%d",&marks[i]);
    }

    for(int i =0 ;i<new;i++)
    {
        printf("Marks entered for %d is %d\n",i+1,marks[i]);
        
    }
    return 0;
}
