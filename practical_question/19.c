#include <stdio.h>
int main()
{
    typedef struct emp_designation
    {
        int id;
        char desig[15];
        char gender[1];
    } emp;
    int n;
    printf("Enter the no of id's you want to enter :");
    scanf("%d", &n);
    emp member[n];

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the Employee ID : ");
        scanf("%d", &member[i].id);
        printf("\nEnter the Designation of the Employee :");
        scanf("%s", &member[i].desig);
        printf("\nEnter the gender of the Employee :");
        scanf("%s", &member[i].gender);
    }
    printf("\n\tID\t||\tGENDER\t||\tDESIGNATION\t");
    for (int i = 0; i < n; i++)
    {
        printf("\n\t%d\t||\t%s\t||\t%s\t\n", member[i].id, member[i].gender, member[i].desig);
    }

    return 0;
}
