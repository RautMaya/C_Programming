#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number");
    scanf("%d",&n);
    if(n<=18)
        prinf("The person %d is eligible for voting",n);
    else
    prinf("The person %d is not eligible for voting",n);
    return 0;

}
