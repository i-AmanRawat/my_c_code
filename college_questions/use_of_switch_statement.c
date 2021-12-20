#include <stdio.h>
int main()
{
    char ch;
    printf("enter a character: ");
    scanf("%c",&ch);

    switch(ch)
    {
    case 'a':                   //we can't use ' or ' ||  , ' and ' && with case bcz it will show errors
        {printf("vowel\n");}
        //break;
    case 'e':
        {printf("vowel\n");}
        //break;}
    case 'i':
        {printf("vowel\n");}
        //break;}
    case 'o':
        {printf("vowel\n");}
        //break;}
    case 'u':
        {printf("vowel\n");}
        //break;}
    default:
        {printf("consonant");}
        //break;}
            }
}

