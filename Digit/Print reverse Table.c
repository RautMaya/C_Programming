#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,inum;

    printf("Enter Number");
    scanf("%d",&inum);

    printf("Reverse Table of %d\n",inum);

    for(i=10;i>=1;i--)
    {
        printf("%d\n",(inum*i));

    }
    getch();
    return 0;
}
