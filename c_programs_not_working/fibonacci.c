// fabonnici series
#include <stdio.h>
void series(int);
int main()
{
    int num;
    printf("How long your fabonnici series should be ?\n");
    scanf("%d", &num);
    series(num);
    return 0;
}

void series(n)
{
    int n1 = 0;
    int n2 = 1;
    int n3;
    do{
        if (n<2)
        {
            printf("Limit should be greater than 2.");
        }
        else
        {           
            printf("%d \n %d \n", n1, n2);
            n3 = n1 + n2;
            printf("%d\n", n3);
            n1 = n2;
            n2 = n3;
            n--;
        }

        } while (n > 2);
}
