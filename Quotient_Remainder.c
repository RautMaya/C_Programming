#include<stdio.h>
int main()
{
    int divisor,dividant,quotient,remainder;
    printf("enter value of dividant");
     printf("enter value of divisor");
     scanf("%d%d",&dividant,&divisor);
     quotient=dividant/divisor;
     remainder =dividant%divisor;
     prinf("quotient =%d",quotient);
     printf("remainder=%d",remainder);
     return 0;
}
