#include<stdio.h>
#include<conio.h>

long long int Factorial(int);

int main()
{
    int No;
    long long int Ans = 0;

    printf("\n Enter Positive Number.");
    scanf("%d",&No);

    Ans = Factorial(No);

    printf("Factorial of %d is = %lld",No,Ans);

return 0;
}

long long int Factorial(int Num)
{

    long long int fact = 0;

    for(fact=1;Num > 1;Num--)
    {
        fact = fact * Num;
    }
}
