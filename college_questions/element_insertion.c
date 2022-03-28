/*
inserting an element in the array at the desired position.
*/

#include<stdio.h>
void enterarray(int array[100] , int l ){
    for (int i =0 ; i<l ; i++){
        printf("array[%d] : ",i+1);
        scanf("%d", &array[i]);
    }
}

void print(int array[100] , int l ){
    for (int i=0 ; i < l+1 ; i++){
        printf (" array[%d] : %d \n", i+1,array[i]);
    }
}

void khiskao(int array[100],int l , int n , int pos){
    int m=(l-pos)+1;
    while( m> 0){
        array[l]=array[l-1];
        m--;
        l--;
    }
    array[pos-1] = n;
}

int main (){
    int array[100] , limit , number , position;
    printf("How many elements you want to enter in the array ? \n");
    scanf("%d",&limit);
    printf("Start entering your array - \n");
    enterarray(array,limit);
    printf("Enter the element you want to insert :");
    scanf("%d", &number);
    printf("Enter position :");
    scanf("%d", &position);
    khiskao(array,limit,number,position);
    printf("Printing the array you have entered - \n");
    print(array,limit);
    return 0;
}
