/*
array is a homogeneous data type (but list is not,list is mutable but tup is immutable). It has contineous memory allocation.
list is enclosed in square brackets but tuples with paranthesis.

*/
#include <stdio.h>
int main()
{
    int i , ar[5] , sr;                         // 
    int ch;
    printf("enter 5 numbers of your choice:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<5;i++)
    {
           printf("you have entered %d at %d position \n",ar[i],i+1);
    }
    uppar:
    printf("enter a element to be searched :\n");
    scanf("%d",&sr);
    for(i=0;i<5;i++)
    {
        if (ar[i]==sr)
        {
               printf("entered element is present at %d position\n",i++);
               break;
        }
        else if (i==4)
    {
            printf("entered no doesn't exist\nTry again !\n");
            printf("To try again : \nenter 1\nTo exit the program:\nenter 0\n");    //code is not running when instead of 1/0 we are using y/n.
            printf("enter your choice :  ");
            scanf("%d",&ch);
            if (ch==1)
                goto uppar;
            else 
                break;    }
    }   
return 0;
} 
