#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b;

    printf("Enter Two Numbers");
    scanf("%d%d",&a,&b);

    printf("\n Before Swapping %d and %d",a,b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("\n After Swapping %d and %d",a,b);

    getch();
    return 0;

}
