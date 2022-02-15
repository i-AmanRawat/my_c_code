#include<stdio.h>
void swap(int m,int n){
    int temp;
    temp = m;
    m = n;
    n = temp;
    printf("Numbers after swaping (inside the function) %d and %d\n",m,n);
}
int main (){
    printf("Enter 2 numbers :\n");
    int a,b;
    scanf("%d %d",&a,&b);
    printf("Numbers before swaping %d and %d\n",a,b);
    swap(a,b);
    printf("Numbers after swaping (outside the function) %d and %d\n",a,b);
    return 0;
}
