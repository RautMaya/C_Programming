#include<stdio.h>
#include<conio.h>
typedef long long int LLI;
int Check_15th_Bit(int);

int main()
{
    LLI No=0;

    printf("\n Enter a Number :");
    scanf("%d",&No);

    No = Check_15th_Bit(No);

    getch();
    return 0;
}
int Check_15th_Bit(int Num)
{
    if((Num >> 14)& 1)
    {
        printf("\n 15 th bit of %d is ON",Num);
    }
    else
    {
        printf("\n 15 th bit of %d is OFF",Num);
    }
}

