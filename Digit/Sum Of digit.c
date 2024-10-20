#include<stdio.h>
#include<conio.h>

int main()
{
    int iNum=0,temp=0,dig=0,iCnt=0;

    printf("Enter Number");
    scanf("%d",&iNum);

    temp=iNum;
    while(temp>0)
    {
        dig=temp%10;

        iCnt=iCnt+dig;


        temp=temp/10;
    }
    printf("Sum of Digit is %d =%d",iNum,iCnt);

    getch();
    return 0;
}
