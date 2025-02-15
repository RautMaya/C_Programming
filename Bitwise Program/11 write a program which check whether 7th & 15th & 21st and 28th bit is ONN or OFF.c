/// Write a program which checks 7th and 15th & 21st & 28th bit is ON or OFF

#include<stdio.h>
#include<conio.h>
typedef long long int LLI;


int main()
{
    LLI Num=0 ;

    printf("\n Enter a Number :");
    scanf("%d",&Num);

    printf("\n ================================******===============================");
    if(((Num >> 6)& 1) )
    {
        printf("\n 7th bit of %d is ON",Num);
    }
    else
    {
        printf("\n 7th bit of %d is OFF",Num);
    }
     if(((Num >> 14)& 1))
    {
        printf("\n 15th bit of %d is ONN",Num);
    }
    else
    {
        printf("\n 15th bit of %d is OFF",Num);
    }
    if(((Num >> 20)& 1))
    {
        printf("\n 19th bit of %d is ONN",Num);
    }
    else
    {
        printf("\n 19th bit of %d is OFF",Num);
    }
    if(((Num >> 26)& 1))
    {
        printf("\n 28th bit of %d is ONN",Num);
    }
    else
    {
        printf("\n 28th bit of %d is OFF",Num);
    }

    printf("\n ================================******===============================");

    getch();
    return 0;
}



