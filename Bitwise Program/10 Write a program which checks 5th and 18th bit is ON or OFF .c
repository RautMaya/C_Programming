/// Write a program which checks 5th and 18th bit is ON or OFF

#include<stdio.h>
#include<conio.h>
typedef long long int LLI;


int main()
{
    LLI Num=0 ;

    printf("\n Enter a Number :");
    scanf("%d",&Num);

    printf("\n ================================******===============================");
    if(((Num >> 4)& 1) )
    {
        printf("\n 5th bit of %d is ON",Num);
    }
    else
    {
        printf("\n 5th bit of %d is OFF",Num);
    }
     if(((Num >> 17)& 1))
    {
        printf("\n 18th bit of %d is ONN",Num);
    }
    else
    {
        printf("\n 18th bit of %d is OFF",Num);
    }

    printf("\n ================================******===============================");

    getch();
    return 0;
}


