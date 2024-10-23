#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Temp=0,Fact=0;

 Up:
       printf("\n Enter Integer Number =");
       scanf("%d",&No);

       if(No<=0)
       {
            printf("\n Invalid Number .");
            goto Up;

       }

          for(Temp=No,Fact=1;Temp>1;Temp--)
          {
            Fact=Fact*Temp;
          }
            printf("\n Factorial Of %d is =%d",No,Fact);

    getch();
    return 0;

}
