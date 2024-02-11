#include<stdio.h>
int main()
{
    int a,b,c;
    Prinf("Enter First number");
    scanf("%d",&a);
    Prinf("Enter Second number");
    scanf("%d",&b);
    Prinf("Enter third number");
    scanf("%d",&c);
    if (a>b)
    {
        if(a>c)
        {
            prinf("%d is grater",a);
        }
    }
     if (b>a)
    {
        if(b>c)
        {
            prinf("%d is grater",b);
        }
    }
     if (c>b)
    {
        if(c>a)
        {
            prinf("%d is grater",c);
        }
    }
    return 0;

}
