#include <stdio.h>
void print_array(int arr[],int n){
    for (int i =0;i<n;i++){
        printf("array[%d] : %d \n",i+1,arr[i]);
    }
}

// int swap(int a, int b){
//     int temp;
//     temp =a ;
//     return a= b;
//     return b = temp;
// }

int main()
{
    int n;
    printf("No of elements you want to enter ?\n");
    scanf("%d",&n);
    int arr[n];
    for (int i =0;i<n;i++){
        printf("Enter the element at arr[%d] :\n",i+1);
        scanf("%d",&arr[i]);
    }
    print_array(arr,n);

    printf("\n");

    // bubble sort 
    int temp ;
    for(int i =0; i<n ;i++)
        if (arr[i]>arr[i+1]){
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp ;
        }
    print_array(arr,n);
    return 0;
}
