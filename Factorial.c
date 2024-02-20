#include<stdio.h>
int main()
{

    int i,num,fact=1;
    printf("Enter a number");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fact=fact*1;
    }
    printf("factorial of %d,is %d",num,fact);
    return 0;
}
