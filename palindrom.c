#include<stdio.h>
int main()
{

    int num,reverse=0,remainder;
    printf("Enter a number");
    scanf("%d",&num);
    while(num!=0)
    {
        remainder=num%10;
        reverse=reverse*10+remainder;
        num/=10;
    }
    if(reverse==num)
        printf("The given number is palindrome");
    else
        printf("The given number is not palindrome");
    return 0;
}
