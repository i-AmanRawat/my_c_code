#include<stdio.h>
void swap(int *m,int *n){
    int temp;
    temp = *m;
    *m = *n;
    *n = temp;
}
int main (){
    printf("Enter 2 numbers :\n");
    int a,b;
    scanf("%d %d",&a,&b);
    printf("Numbers before swaping %d and %d\n",a,b);
    swap(&a,&b);
    printf("Numbers after swaping %d and %d\n",a,b);
    return 0;
}
