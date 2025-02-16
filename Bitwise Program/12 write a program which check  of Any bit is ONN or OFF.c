#include<stdio.h>
#include<conio.h>
typedef long long int LLI;
typedef int  BOOL;

int main()
{
    LLI No = 0;
    BOOL B = 0;
    char ch;

    printf("\n Enter a Number :");
    scanf("%lld",&No);

    Up:
        fflush(stdin);
    printf("\n Enter Which Bit Do you Want to find :");
    scanf("%d",&B);


    if(( B > 32) && ( B < 0))
    {
        printf("\n Invalid Bit Number :");
        goto Up;
    }

    printf("\n===========================*******=====================");
    if((No >> (B - 1)) & 1)
    {
        printf("\n %lld Number of %d Bit is ON",No,B);
    }
    else
    {
        printf("\n %lld Number of %d Bit is OFF",No,B);
    }

    printf("\n===========================*******=====================");

    printf("\n You Want to Find More Bit which is ON or OFF to Write Yes or No : \n");
    fflush(stdin);
    scanf("%c",&ch);

    if(ch == 'Y' || ch =='y')
    {
        goto Up;
      fflush(stdin);
    }

    getch();
    return 0;
}
