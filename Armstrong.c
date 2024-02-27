#include<stdio.h>
int main()
{

    int num,reverse=0,rem,n;
    prinf("Enter any one number=");
    scanf("%d",&num);
    n=num;
    while(num!=0)
    {
        rem=num%10;
        reverse=reverse+(rem*rem*rem);
        num=num/0;

    }
    printf("reverse =%d",reverse);
    if(n==reverse)
    {
        prinf("The given number is Armstrong");
    }
    else
    {
        prinf("The given number is not Armstrong");
    }
    return 0;
}
