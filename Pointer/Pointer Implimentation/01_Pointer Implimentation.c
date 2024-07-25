#include<stdio.h>
#include<conio.h>

int main()
{
    int iNo=22,iNum=55;
    int *ip1=&iNo;
    int *ip2=&iNo;

    printf("\n Value of iNo =%d",iNo);
    printf("\n Address of iNo =%d",&iNo);
    printf("\n Value of *ip1=%d",ip1);
    printf("\n Value of iNo Using its Pointer =%d",*ip1);
    printf("\n Address of Pointer *ip1 =%d",&ip1);

    printf("\n Value of iNum =%d",iNum);
    printf("\n Address of iNum =%d",&iNum);
    printf("\n Value of *ip2=%d",ip2);
    printf("\n Value of Using its Pointer =%d",*ip2);
    printf("\n Address of Pointer *ip2 =%d",&ip2);




    getch();
    return 0;

}
