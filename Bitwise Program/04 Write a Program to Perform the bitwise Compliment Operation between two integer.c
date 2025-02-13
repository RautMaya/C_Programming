#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0, Res =0;

    printf("\n Enter a 1st Number :");
    scanf("%d",&No1);

    Res = ~No1;

    printf("\n Result is => ~%d = %d",No1,Res);

    getch();
    return 0;
}


