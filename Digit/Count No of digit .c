#include<stdio.h>
#include<conio.h>

int main()
{
    int num=0,temp=0,Cnt=0;

    printf("Enter Number\n");
    scanf("%d",&num);

    temp=num;
    while(temp>0)
    {
        temp=temp/10;
        Cnt++;

    }
    printf("Count of Digit %d=%d",num,Cnt);
    getch();
    return 0;
}
