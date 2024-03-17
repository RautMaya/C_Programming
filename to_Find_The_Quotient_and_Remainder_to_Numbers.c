#include<stdio.h>
int main()
{
    int A,B,quotient=0,remainder=0;
    printf("Enter Two numbers A and B:\n");

    scanf("%d%d",&A,&B);

    quotient=A/B;
    remainder=A%B;

    printf("Quotient when A/B is: %d\n",quotient);
    printf("Remainder when A/B is: %d\n",remainder);

    return 0;
}
