#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    double a,b;
    while(1)
    {
        printf("Enter an operator (+,-,*,/ ),"
               "if want to exit press x:");
               scanf("%c",&ch);

               if(ch=='x')
                exit(0);
               printf("Enter Two First and Second operand:");
               scanf("%1f %1f",&a,&b );

               switch(ch)
               {
                   case '+':printf("%.11f +%.11f = %.11f\n",a,b,a+b);
                   break;

                    case '-':printf("%.11f -%.11f = %.11f\n",a,b,a-b);
                   break;

                    case '*':printf("%.11f *%.11f = %.11f\n",a,b,a*b);
                   break;

                    case '/':printf("%.11f /%.11f = %.11f\n",a,b,a/b);
                   break;

                   default:printf("Error ! please write a valid operator\n");
               }

               printf("\n");

    }
}
