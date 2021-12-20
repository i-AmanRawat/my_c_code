/* 
calculate area of a circle by taking radius from the user.
use value of pie as 3.14
*/


#include <stdio.h>
#define pie 3.14
int main()
{
    int r ;
    float area ;
    printf("enter the radius:\t");
    scanf("%d",&r);
    area =pie*r*r;
    printf("area of the circle is %f",area);
    return 0;
}
