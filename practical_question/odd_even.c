int main()
{
int number;
clrscr();

printf("Enter a number :");
scanf("%d",&number);

if (number%2==0)
    printf("%d is Even ",number);
else
    printf("%d is Odd ",number);
    
getch();
return 0;
}
