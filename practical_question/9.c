#include<stdio.h>
int multiply(int a , int b){
    return a*b;
}
int main (){
    int m,n;
    printf("Enter to number to display the multiplication of two number.\n");
    printf("m = ");
    scanf("%d",&m);
    printf("n = ");
    scanf("%d",&n);
    printf("Multiplication of %d and %d is %d .",m,n,multiply(m,n));
    return 0;
}
