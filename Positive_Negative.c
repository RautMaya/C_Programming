#include<stdio.h>
int main()
{

    int n;
    printf("enter any number");
    scanf("%d",&n);
    if(n>0)
        printf("the given number %d is positive",n);
    else
        printf("the given number %d is negative",n);
    return 0;
}
