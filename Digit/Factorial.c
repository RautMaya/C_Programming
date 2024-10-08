#include<stdio.h>
#include<conio.h>

int main()
{
    int num,fact=0,temp;

    up:
    printf("\n Enter Number");
    scanf("%d",&num);

    if(num<=0)
    {
        printf("\n Invalid Number");
        goto up;
    }
    else
    {


    for(temp=num,fact=1;temp>1;temp--)
    {
        fact=fact*temp;


    }
    }
    printf("Factorial of %d =%d",num,fact);

    getch();
    return 0;
}

