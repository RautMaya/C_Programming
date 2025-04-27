#include<stdio.h>
#include<conio.h>
typedef long long int LLI;
int Toggle_7th_Bt(int);

int main()
{
    LLI No = 0 , Res =0;

    printf("\n Enter a Number :");
    scanf("%lld",&No);

    printf("\n ===============================********======================");

    Res = Toggle_7th_Bt(No);
    printf("\n %lld of after Toggle a Number the number is %lld",No,Res);

    printf("\n ===============================********======================");

    getch();
    return 0;
}
int Toggle_7th_Bt(int Num)
{

    return ((Num >> 6) ^ 1);
}
