#include<stdio.h>
#include<conio.h>

int main()
{
    int iNum=0,temp=0,dig=0,Cnt=0;

    printf("Enter Number");
    scanf("%d",&iNum);

    temp=iNum;
    while(temp>0)
    {
        dig=temp%10;

        Cnt=Cnt+dig;


        temp=temp/10;
    }
    printf("Sum of Digit is %d =%d",iNum,Cnt);

    getch();
    return 0;
}
