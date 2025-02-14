#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0;

    printf("\n Enter a Number :");
    scanf("%d",&No);

    if((No >> 14)& 1)
    {
        printf("\n 15 th bit of %d is ON",No);
    }
    else
    {
        printf("\n 15 th bit of %d is OFF",No);
    }

    getch();
    return 0;
}
