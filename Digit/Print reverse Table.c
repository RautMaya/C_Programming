#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,num;

    printf("Enter Number");
    scanf("%d",&num);

    printf("Reverse Table of %d\n",num);

    for(i=10;i>=1;i--)
    {
        printf("%d\n",(num*i));

    }
    getch();
    return 0;
}
