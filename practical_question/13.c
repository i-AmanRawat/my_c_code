#include<stdio.h>
int main (){
    int n,last,new,number;
    printf("Enter a number : \n ");
    scanf("%d",&n);
    number=n;
    while (n!=0){
    last= n%10;
    new = new*10+last;
    n=n/10;
    }
    if (number==new){
        printf("%d is a palindrome number.",number);
    }
    else{
        printf("Entered no ie %d is not a palindrome number.",number);
    }
    return 0;
}
