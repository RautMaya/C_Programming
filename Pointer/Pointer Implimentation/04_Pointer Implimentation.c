#include<stdio.h>
#include<conio.h>

int main()
{
    int No=22;
    int *iPtr1=&No;
    int *iPtr2=&No;

    printf("\n Value of No Using its pointer =%d",*iPtr1);
    printf("\n Address No Using its Pointer =%d ",iPtr1);
    printf("\n Address of iPtr1 =%d\n\n",&iPtr1);

    printf("\n Value of No Using its pointer =%d",*iPtr2);
    printf("\n Address No Using its Pointer =%d ",iPtr2);
    printf("\n Address of iPtr2 =%d",&iPtr2);

    No=55;
    printf("\n===================\n");
    printf("\n Value of No Using its pointer =%d",*iPtr1);
    printf("\n Value of No Using its pointer =%d",*iPtr2);
    printf("\n===================\n");
    getch();

    *iPtr1=101;
    printf("\n Value Of No=%d",No);
    printf("\n Value of No Using its pointer =%d",*iPtr1);
    printf("\n Value of No Using its pointer =%d",*iPtr2);
    printf("\n===================\n");



    getch();
    return 0;
}
