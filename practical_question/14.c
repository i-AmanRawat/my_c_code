#include<stdio.h>
void print(int ar[],int n){
    for (int i =0;i<n;i++){
        printf("array[%d] : %d\n",i+1,ar[i]);
    }
}
int main (){
    int n,i,sum=0;
    printf("no of elements you want to enter in the array :\n");
    scanf("%d", &n);
    int ar[n];
    printf("Enter the elements in the array :\n");
    for (i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    for (i=0;i<n;i++){
        sum= sum +ar[i];
    }
    printf("Sum of all the elements of the array is %d \n",sum);

    print(ar,n);

    return 0;
}
