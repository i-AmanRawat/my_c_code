#include<stdio.h>
void reverse_array(int arr[],int limit){
    int temp;
    for (int i=0;i<(limit/2);i++){
        temp = arr[i];
        arr[i]=arr[limit-i-1];
        arr[limit-i-1]=temp;
        }
}

void print_array(int arr[], int limit)
{
    for (int i = 0; i < limit; i++)
    {
        printf("%d \t", arr[i]);
    }
}

int main (){
    int limit;
    printf("Enter the no of element you want to enter :\n");
    scanf("%d", &limit);
    int arr[limit];
    printf("Enter the elements in the array :\n ");
    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array before reversing :\n");
    print_array(arr, limit);

    reverse_array(arr, limit);

    printf("\nArray after reversing :\n");
    print_array(arr, limit);
    return 0;
}
