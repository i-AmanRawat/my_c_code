
// long method.

#include<stdio.h>
int main()
{
int a ,b,c;
printf("Enter three No. to print the greatest no. among the three.\n");
printf("a =");
scanf("%d",&a);
printf("b =");
scanf("%d",&b);
printf("c =");
scanf("%d",&c);

if (a>b)
{
   if (a>c)
   {
    printf("%d is grestest no. among the three.",a); 
   }
   else
   {
    printf("%d is grestest no. among the three.",c);
   }
}
else
{
    if (b>c)
    {
    printf("%d is grestest no. among the three.",b);
    }

    else 
    { 
    printf("%d is grestest no. among the three.",c);
    }
}
   
return 0;

}

// short method 

#include <stdio.h>
int main (){
    printf("Enter three numbers :\n");
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int greatest = (a>b&&b>c?a:b>c?b:c);
    printf("greatest number is %d",greatest);

    return 0 ;
}

