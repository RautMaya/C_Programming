#include<stdio.h>
#include<conio.h>
typedef long long int LLI;
int OFF_7th_Bt(LLI);

int main()
{
    LLI No = 0;

    printf("\n Enter a Number :");
    scanf("%lld",&No);

     OFF_7th_Bt(No);



    getch();
    return 0;

}
int OFF_7th_Bt(LLI Num)
{
    LLI Res = 0;
    if((Num >> 6) & 1)
    {
        ((Num >> 6) ^ 1);

        printf("\n %lld is ON after the Operation the given Bit is OFF is %lld ",Num,Res);
    }
    else
    {
        printf("\n 7th Bit is Already OFF");

    }
    return 0;
}
