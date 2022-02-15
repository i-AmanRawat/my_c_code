#include<stdio.h>
int main (){
    int n,last,sum=0,number;
    printf("Enter a number : \n ");
    scanf("%d",&n);
    number=n;
    while (n!=0){
    last= n%10;
    n=n/10;
    sum+=last*last*last;
    }
    if (number==sum){
        printf("%d is a armstrong number.",number);
    }
    else{
        printf("Entered no ie %d is not a armstrong number.",number);
    }
    return 0;
}
