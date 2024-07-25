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

    getch();
    return 0;
}
