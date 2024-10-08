#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,num;

    printf("Enter Table");
    scanf("%d",&num);

     printf("Number of table is %d\n",num);

    for(i=1;i<=10;i++)
    {
        printf("%d\n",(num*i));

    }

    getch();
    return 0;
}
