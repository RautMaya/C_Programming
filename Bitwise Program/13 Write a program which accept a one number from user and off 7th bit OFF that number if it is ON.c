///Write a program which accept a one number from user and off 7th bit OFF that number if it is ON

#include<stdio.h>
#include<conio.h>
typedef long long int LLI;
typedef int BOOL;
 int OFF_7th_Bt(int);

int main()
{
    LLI No = 0 , Res = 0;
    BOOL B = 0;

    printf("\n Enter a Number :");
    scanf("%lld",&No);

    Res = No;

    Res = OFF_7th_Bt(Res);



    getch();
    return 0;
}
int OFF_7th_Bt(int Num)
{
    BOOL Res = 0;
    if((Num >> 6) & 1)
    {
        Res = ((Num >> 6) ^ 1);
        printf("\n %d is ON after the operation it is OFF number is = %d",Num,Res);
    }
    else
    {
        printf("\n Already OFF");
    }
    return 0;
}
