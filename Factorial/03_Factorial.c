#include<stdio.h>
#include<conio.h>


int main()
{
    int Num = 0,fact = 0;

    printf("\n Enter Positive Number :");
    scanf("%d",&Num);

    for(fact = 1;Num > 1;Num--)
    {
        fact = fact * Num;

    }

    printf("\n Factorial of Given Number is = %d.", fact);

    return 0;


}
