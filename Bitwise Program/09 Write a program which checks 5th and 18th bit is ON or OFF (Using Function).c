/// Write a program which checks 5th and 18th bit is ON or OFF

#include<stdio.h>
#include<conio.h>
typedef long long int LLI;
int Check_5th_Bit(int);
int Check_18th_Bit(int);

int main()
{
    LLI No=0 , Ret = 0;

    Ret = No;

    printf("\n Enter a Number :");
    scanf("%d",&No);

    Ret = Check_5th_Bit(Ret);
    Ret = Check_18th_Bit(Ret);

    getch();
    return 0;
}
int Check_5th_Bit(int Num)
{
    if((Num >> 4)& 1)
    {
        printf("\n 5th bit of Given Number  is ON",Num);
    }
    else
    {
        printf("\n 5th bit of Given Number  is OFF",Num);
    }
}
int Check_18th_Bit(int Num)
{
    if((Num >> 14)& 1)
    {
        printf("\n 18th bit of Given Number  is ON",Num);
    }
    else
    {
        printf("\n 18th bit of Given Number is OFF",Num);
    }
}

