#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0,j = 0,R = 0,C = 0;

    printf("\n Enter Rows : ");
    scanf("%d",&R);
    printf("\n Enter Columns : ");
    scanf("%d",&C);

    for(i = 1; i <= R ; i++)
    {
        for(j = 1 ; j <= C ; j++)
        {
            printf(" %d ", j );
        }
        printf("\n");
    }

    getch();
    return 0;
}
