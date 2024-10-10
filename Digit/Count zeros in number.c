#include<stdio.h>
#include<conio.h>

int main()
{
    int iNum,temp,Cnt=0,dig=0,i=1;

    printf("Enter Number\n");
    scanf("%d",&iNum);

    temp=iNum;
    while(temp>0)
    {
        dig=temp%10;

        if(dig==0)
        {
          Cnt++;
        }

        temp=temp/10;
    }
    printf("Count of zeros is %d=%d",iNum,Cnt);
    getch();
    return 0;
}
