#include<stdio.h>
void reverse_array(int *arr,int limit)
{
    int lower =0;
    int upper=(limit -1) ;
    int middle = (lower + upper) / 2;
    int temp;

    if ((upper+1)%2==1)
    {
        while (lower!=upper || upper!=middle )
        {
            temp=*(arr+lower);
            *(arr+lower) =*(arr+upper);
            *(arr+upper)=temp;
            lower+=1;
            upper-=1;
        }
    }
    else
    {
        while (lower<=middle )
        {
            temp=*(arr+lower);
            *(arr+lower) =*(arr+upper);
            *(arr+upper)=temp;
            lower+=1;
            upper-=1;
        }
    }

}

void print_array(int arr[], int limit)
    {
        for (int i =0;i<limit;i++)
        {
            printf("%d \t",arr[i]);
        }
    }

int main ()
{
    int limit ;
    printf ("Enter the no of element you want to enter :\n");
    scanf("%d",&limit);
    int arr[limit] ;
    printf ("Enter the elements in the array :\n ");
    for (int i =0;i<limit;i++)
    {
        scanf ("%d",&arr[i]);
    }
    printf("Array before reversing :\n");
    print_array(arr, limit);
    
    reverse_array(arr,limit);

    printf("\nArray after reversing :\n");
    print_array(arr, limit);

    return 0 ;
}
