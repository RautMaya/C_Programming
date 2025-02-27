#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0,C = 0, i = 0, j = 0;

    printf("\n Enter No of Rows : ");
    scanf("%d",&R);

    printf("\n Enter No of Columns : ");
    scanf("%d",&C);

    for(i=1 ; i <= R ; i++)
    {
        for ( j = 1; j <= C ; j++)
        {
            if( j%2==0)
            {
                printf(" # ");
            }
            else
            {
                printf(" * ");
            }
            printf("   ");
        }
        printf("\n");
    }
    getch();
    return 0;
}
