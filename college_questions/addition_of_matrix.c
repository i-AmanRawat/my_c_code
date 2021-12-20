#include<stdio.h>
int main()
{
    int i,j,a[3][3],b[3][3],c[3][3];    //defining the data type of 3 matrix 
    int ch,mch;
    printf("Enter the elements for matrix a : \n"); //taking the user input values for matrix a
    for(i=0;i<3;i++)
     {   
         for(j=0;j<3;j++)
     {
            scanf("%d",&a[i][j]);
     }
     }
    printf("Enter the elements for matrix b: \n");  //taking the user input values for ma=trix b
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
    {        
        scanf("%d",&b[i][j]);
    }
    }


    printf("Want to print the matric ?\nEnter your choice (if yes enter 1/else any no.) :\n");
     /*
    asking the user wheather he wants to look his entered matix or not
    */

  scanf("%d",&ch);
    if (ch==1)
    {    printf("which matix you want to print? \na or b\nEnter your choice (enter 1 if u want to print matrix a else any other no.):\n");
        scanf("%d",&mch);

            if(mch==1)
            {
               for(i=0;i<3;i++)
               {
                  for(j=0;j<3;j++)
                  {
                     printf("%d    ",a[i][j]);
                  } 
               
                printf("\n");
               }
            }
            else 
            {
               for(i=0;i<3;i++)
               {
                  for(j=0;j<3;j++)
                  {
                     printf("%d    ",b[i][j]);
                  }
                printf("\n");
               }
            }
    }   

    else 
    {

    }
    
/*
program for adding up a and b matix and storing the values in the already defined empty matrix
*/

    printf("performing the addition of matrix a and b :\n");
    for(i=0;i<3;i++)
     {   
         for(j=0;j<3;j++)
     {
            c[i][j]=a[i][j] + b[i][j];
     }
     }    
    printf("printing matix c which is the sum of matrix a and b :\n");
                for(i=0;i<3;i++)
               {
                  for(j=0;j<3;j++)
                {
                      printf("%d    ",c[i][j]);
                }
               printf("\n");
               }  
            

  
    return 0;
}
